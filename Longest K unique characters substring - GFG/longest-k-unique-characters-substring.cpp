//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    int longestKSubstr(string s, int k) {
    unordered_map<char,int>m;
    int n = s.length();
    if(n<k)   return -1;
    
    int i=0,j=0;
    int maxi = -1;
    
    while(j<n){
        m[s[j]]++;
        if(m.size()<=k){
            maxi = max(maxi,j-i+1);
        }
        else{
            while( m.size()>k){
                m[s[i]]--;
                if(m[s[i]]==0) 
                m.erase(s[i]);
                i++;
            }
        }
        j++;
    }
    return maxi;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int k;
        cin >> k;
        Solution ob;
        cout << ob.longestKSubstr(s, k) << endl;
    }
}

// } Driver Code Ends