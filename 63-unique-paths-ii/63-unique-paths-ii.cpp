class Solution {
public:
    
        int path(int i,int j,vector<vector<int>>&dp,int m,int n,vector<vector<int>>& grid)
        {
            if(i==m-1&&j==n-1)
                return 1;
            if(i>=m||j>=n)
                return 0;
            if(grid[i][j]==1&&i>=0&&j>=0)
                return 0;
            if(dp[i][j]!=-1)
                return dp[i][j];
            int right=path(i,j+1,dp,m,n,grid);
            int down=path(i+1,j,dp,m,n,grid);
            return dp[i][j]=right+down;
        }
        int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
            int m=obstacleGrid.size();
            int n=obstacleGrid[0].size();
            if(obstacleGrid[m-1][n-1]==1)
                return 0;
      vector<vector<int>>dp(m,vector<int>(n,-1));
        return path(0,0,dp,m,n,obstacleGrid);
    }
};