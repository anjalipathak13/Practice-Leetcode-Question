class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
       
        
         int m=grid.size();
         if(m==0)
             return 0;
         int n=grid[0].size();
         vector<vector<int>> dp(m,vector<int>(n,0));
        
         dp[0][0]=grid[0][0];
         for(int i=1;i<n;++i)
             dp[0][i]=dp[0][i-1]+grid[0][i];
          for(int j=1;j<m;++j)
              dp[j][0]=dp[j-1][0]+grid[j][0];
    
         for(int i=1;i<m;++i)
         {
             for(int j=1;j<n;++j)
                         dp[i][j]= grid[i][j]+min(dp[i-1][j],dp[i][j-1]);
            
      }
       return dp[m-1][n-1]; 
       
    }
};