class Solution {
public:
int climb(int n,vector<int>&dp)
{  int left,right;
    if(n==0)
        return 1;
    if(n==1)
        return 1;
    if(dp[n]!=-1)
        return dp[n];
    return dp[n]=climb(n-1,dp)+climb(n-2,dp);
    
   // return left+right;
}
int climbStairs(int n) {
   vector<int>dp(n+1,-1);
   int ans=climb(n,dp);
    return ans;
    }
};