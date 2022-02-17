class Solution {
public:
    void dfs(vector<vector<int>>& grid,int i,int j,int n,int m)
    {
        if(i<0 || j<0||i>=n||j>=m||grid[i][j]==1)
            return;
        grid[i][j]=1;
        dfs(grid,i+1,j,n,m);
        dfs(grid,i-1,j,n,m);
         dfs(grid,i,j+1,n,m);
         dfs(grid,i,j-1,n,m);
    }
    int closedIsland(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==0 && (i==0 || j==0 ||i==n-1||j==m-1))
                    dfs(grid,i,j,n,m);
            }
        }
        int ans=0;
         for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==0){
                     dfs(grid,i,j,n,m);
                    ans++;
                }
            }
         }
        return ans;
    }
};