class Solution {
public:
    int dfs(vector<vector<int>>& grid,int i,int j,int n,int index)
    {
        if(i<0 || j<0 || i>=n || j>=n || grid[i][j]!=1)
            return 0;
        
        grid[i][j]=index;
        /*dfs(grid,i+1,j,n,ans,index);
        dfs(grid,i-1,j,n,ans,index);
        dfs(grid,i,j+1,n,ans,index);
         dfs(grid,i,j-1,n,ans,index); */
        int count = dfs(grid, i+1, j,n ,index) + 
                    dfs(grid, i-1, j,n, index) + 
                    dfs(grid, i, j+1,n, index) + 
                    dfs(grid, i, j-1,n, index);
        return count+1;
    }
 void find_adj(vector<vector<int>>& grid,int i,int j,int n,set<int>&s)
 {
    /*if(i>0)
        s.insert(grid[i-1][j]);
    if(i<n-1)
      s.insert(grid[i+1][j]);     
     if(j>0)
         s.insert(grid[i][j-1]);
     if(j<m-1)
         s.insert(grid[i][j+1]);*/
     if(i>0) s.insert(grid[i-1][j]);
        if(j>0) s.insert(grid[i][j-1]);
        if(i<n-1) s.insert(grid[i+1][j]);
        if(j<n-1) s.insert(grid[i][j+1]);
        
 }
    int largestIsland(vector<vector<int>>& grid) {
       int n=grid.size();
       
       int index=2;
        unordered_map<int,int>mi;
        int ans=1;
        int maxi=0;
       for(int i=0;i<n;i++)
       {
           for(int j=0;j<n;j++)
           {
               if(grid[i][j]==1){
                  
                    mi[index]=
                        dfs(grid,i,j,n,index);
                   //cout<<ans;
                   maxi=max(maxi, mi[index++]);
                   ans=1;
               }
           }
           }
         
       for(int i=0;i<n;i++)
       {
           for(int j=0;j<n;j++)
           {    
               if(grid[i][j]==0){
                   set<int>s;
                   find_adj(grid,i,j,n,s);
            int c=1;
            for(auto i:s)
            {
                c+= mi[i];
            }
            maxi=max(maxi,c);
           }}
       }
        return maxi;
    }
};
