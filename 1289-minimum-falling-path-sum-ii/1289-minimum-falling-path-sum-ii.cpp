class Solution {
public:
    int solve(int n,int i,int j,vector<vector<int>>& grid,vector<vector<int>>&dp)
    {
        if(i>=n || j>=n)
            return 0;
        if(dp[i][j]!=-1)
            return dp[i][j];
        int ans=INT_MAX;
        for(int k=0;k<n;k++)
        { 
           if(k==j) 
              continue;
               ans=min(ans,(grid[i][j]+solve(n,i+1,k,grid,dp)));
        }
        
       return dp[i][j]=ans; 
        
    }
    int minFallingPathSum(vector<vector<int>>& grid) {
     int n=grid.size();
    vector<vector<int>>dp(n,vector<int>(n,-1));
        int ans=INT_MAX;
        if(grid.size()==1)
            return grid[0][0];
     for(int i=0;i<n;i++)
     {
         ans=min(ans,solve(n,0,i,grid,dp));
     }
        return ans;
    }
};