class Solution {
public:
    int paths(int m,int n,vector<vector<int>>&dp)
    {
        if(m==0&&n==0)
            return 1;
        if(m<0||n<0)
            return 0;
        if(dp[m][n]!=-1)
            return dp[m][n];
        int left=paths(m,n-1,dp);
        int up=paths(m-1,n,dp);
        return dp[m][n]= left+up;
        
    }
    int uniquePaths(int m, int n) {
        vector<vector<int>> dp(m,vector<int>(n,-1));
       // memset(dp,-1,sizeof dp);
      return paths(m-1,n-1,dp);
        
    }
};