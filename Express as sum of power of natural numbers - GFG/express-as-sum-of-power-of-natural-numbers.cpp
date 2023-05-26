//{ Driver Code Starts
// Initial Template for C++


#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution{
    public:
   int mod = 1e9+7;
    int helper(int ind,vector<int>&store,int n,int x,int size,vector<vector<int>>&dp){
        if(n == 0) return 1;
        if(n < 0 || ind == size) return 0;
        if(dp[ind][n] != -1) return dp[ind][n];
        int pick = helper(ind+1,store,n-store[ind],x,size,dp)%mod;
        int notPick = helper(ind+1,store,n,x,size,dp)%mod;
        return dp[ind][n] = (pick+notPick)%mod;
    }
    int numOfWays(int n, int x)
    {
        // code here
        vector<int> store;
        int cnt = 0;
        int i = 1;
        while(cnt < n){
            cnt = pow(i,x);
            i++;
            store.push_back(cnt);
        }
        int size = store.size();
        vector<vector<int>> dp(size+1,vector<int>(n+1,-1));
        return helper(0,store,n,x,size,dp);  
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int  n, x;
        cin >> n >> x;
        Solution ob;
        cout<<ob.numOfWays(n, x)<<endl;
    }
    return 0;
}

// } Driver Code Ends