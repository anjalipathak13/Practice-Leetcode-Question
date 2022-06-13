class Solution {
public:
int path(int i,int j,vector<vector<int>>&dp,int n,vector<vector<int>>&grid)
{
    if(i==n-1)
    {
        return grid[i][j]; 
    }if(dp[i][j]!=-1)
        return dp[i][j];
    int down=grid[i][j]+path(i+1,j,dp,n,grid);
    int di=grid[i][j]+path(i+1,j+1,dp,n,grid);
    return dp[i][j]=min(down,di);
}
    int minimumTotal(vector<vector<int>>& triangle) {
        int n=triangle.size();
        //int n=triangle[0].size();
        vector<vector<int>>dp(n,vector<int>(n,-1));
      return path(0,0,dp,n,triangle); 
        
    }
};