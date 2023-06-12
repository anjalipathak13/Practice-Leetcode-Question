//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution{
  public:
    int helper(int index,vector<int>&profit ,int capacity, vector<vector<int>>&dp){
       
       if(index>=profit.size()){
           return 0;
       }
       if(dp[index][capacity]!=-1){
           return dp[index][capacity];
       }
       
       int notpick=helper(index+1,profit ,capacity,dp);
       
       int pick=-1e9;
       
       if(index+1<=capacity){
           
           pick=profit[index]+helper(index,profit ,capacity-(index+1),dp);
           
       }
       return dp[index][capacity]=max(pick,notpick);
       
   }
  
    int cutRod(int price[], int n) {
       
       vector<int>profit(price,price+n);
       
       vector<vector<int>>dp(n,vector<int>(n+1,-1));
       int capacity=n;
       
       return helper(0,profit ,capacity,dp);
       
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) 
            cin >> a[i];
            
        Solution ob;

        cout << ob.cutRod(a, n) << endl;
    }
    return 0;
}
// } Driver Code Ends