class Solution {
public:
    int path(int i,int j1,int j2,int n,int m,vector<vector<int>>& grid,vector<vector<vector<int>>>&dp)
    {
        if(j1<0||j2<0||j1>=m||j2>=m)
            return -1e9;
        if(i==n-1)
        {
            if(j1==j2)
                return grid[i][j1];
            else
                return grid[i][j1]+grid[i][j2];
        }
        if(dp[i][j1][j2]!=-1)
            return dp[i][j1][j2];
        int maxi=0;
        for(int k1=-1;k1<=1;k1++)
        {
            for(int k2=-1;k2<=1;k2++)
            {
                int value=0;
                if(j1==j2)
                    value=grid[i][j1];
                else{
                    value=grid[i][j1]+grid[i][j2];
                }
            value+=path(i+1,j1+k1,j2+k2,n,m,grid,dp);
                maxi=max(maxi,value);
            }
        }
            
            
     return dp[i][j1][j2]=maxi;   
        
    }
    int cherryPickup(vector<vector<int>>& grid) {
    
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<vector<int>>>dp(n,vector<vector<int>>(n,vector<int>(m,-1)));
      return path(0,0,m-1,n,m,grid,dp);  
    }
};