//{ Driver Code Starts
// Initial template for c++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for c++

class Solution {
  public:
     int sum(int n){
      int count =0;
      while(n!=0){
          int k = n%10;
          n=n/10;
          count+=k;
      }
      return count;
  }
    string BalancedString(int N) {
        // code here
        string s = "abcdefghijklmnopqrstuvwxyz";
        int n = N;
        string ans="";
            while(N>26){
                ans+=s;
                N=N-26;
            }
      
        if(N%2==0){
            for(int i=0;i<N/2;i++){
                ans+=s[i];
            }
            int h = 26 - N/2;;
            for(int i=h;i<26;i++){
                ans+=s[i];
            }
        }
        
        else if(N%2!=0){
            int l = sum(n);
            if(l%2==0){
                // for(int i=0;i<(N+1)/2;i++){
                    ans+=s.substr(0 , (N+1)/2);
                // }
                int h = 26-(N-1)/2;
                // for(int i=h;i<26;i++){
                    ans+=s.substr(h , 26-h);
                // }
            }
            else if(l%2!=0){
                // for(int i=0;i<(N-1)/2;i++){
                    ans+=s.substr(0 , (N-1)/2);
                // }
                int h = 26-(N+1)/2;
                // for(int i=h;i<26;i++){
                    ans+=s.substr(h , 26-h);
                // }
            }
        }
        
        
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.BalancedString(N) << endl;
    }
    return 0;
}

// } Driver Code Ends