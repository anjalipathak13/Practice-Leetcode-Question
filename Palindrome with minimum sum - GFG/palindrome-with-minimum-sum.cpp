//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int minimumSum(string s) {
        // code here
        int n = s.size();
        int j = -1;
        int diff = 0;
        
//checking if string can be made palindrome..
       for(int i=0; i<n; i++){
          if(s[i] != '?'){
            if(s[n-i-1] == '?')
                s[n-i-1] = s[i];
            else if(s[i] != s[n-i-1])
                return -1;
            }
        }
        //calculating min. Ascii diff.
        for(int i=0; i<n; i++){
          if(s[i] != '?'){
             if(j != -1){
               int mean = (s[i]+s[j])/2;
               diff += abs(mean-s[i])+abs(mean - s[j]); 
             }
             j = i;
          }
        }
        return diff;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;

        Solution ob;
        int ans = ob.minimumSum(s);
        cout << ans;
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends