class Solution {
    void dfs(vector<vector<int>>&grid,int i,int j,int &maxi,int &res)
    {   
        if(i<0 || i>=grid.size() || j<0 || j>=grid[0].size()||grid[i][j]==0)
            return ;        
         grid[i][j]=0;
            res++;
            dfs(grid,i+1,j,maxi,res);
             dfs(grid,i-1,j,maxi,res);
            dfs(grid,i,j+1,maxi,res);
            dfs(grid,i,j-1,maxi,res);
         maxi=max(maxi,res);
    }
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
     int m=grid.size();
     int n=grid[0].size();
        int maxi=0;
        int res=0;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {     res=0;
                if(grid[i][j]==1)
                   dfs(grid,i,j,maxi,res);
            }
        }
        return maxi;
    }
};