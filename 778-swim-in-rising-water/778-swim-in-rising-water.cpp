class Solution {
public:
    /*bool dfs(vector<vector<int>>& grid,int mid,int n,vector<vector<int>> vis,int i,int j)
    {
      
if(i < 0 || j < 0 || i >= n || j >= n || vis[i][j]==1 || grid[i][j] > mid) return false; 
            
       if(i==n-1 && j==n-1)
            return true;
        vis[i][j]=1; 
        if(dfs(grid,mid,n,vis,i-1,j))return true;
        if(dfs(grid,mid,n,vis,i+1,j))return true;
        if(dfs(grid,mid,n,vis,i,j+1))return true;
        if(dfs(grid,mid,n,vis,i,j-1))return true;
         
        return false;
    }*/
bool valid(int i,int j,int n){
    if(i>=0 && j>=0 && i<=n-1 && j<=n-1)
        return true;
    return false;
}    
bool bfs(vector<vector<int>>& grid,int mid,int n,vector<vector<int>> vis,int i,int j){
    
      if(grid[0][0]>mid or grid[n-1][n-1]>mid){
            return false;
        }
    int dx[4]={0,0,1,-1};
    int dy[4]={1,-1,0,0};
    queue<pair<int,int>>q;
    q.push({0,0});
    while(!q.empty())
    {
        int s=q.size();
        while(s--)
        {
            int x=q.front().first;
            int y=q.front().second;
            q.pop();
            if(x==n-1&&y==n-1)
                return true;
            for(int i=0;i<4;i++)
            {
                int inx=x+dx[i];
                int iny=y+dy[i];
                if(valid(inx,iny,n) && vis[inx][iny]!=1 && grid[inx][iny]<=mid)
                {
                    q.push({inx,iny});
                    vis[inx][iny]=1;
                }
            }
            
        }
    }    
            return false;
        
    }
    
    
    
    
    
    
    
    int swimInWater(vector<vector<int>>& grid) {
      // int l=0;

        int n=grid.size();
       // int l = max({ 2*(n-1), grid[0][0], grid[n-1][n-1] });    
        int l=0;

         vector<vector<int>>vis(n,vector<int>(n,0));
        int maxi=0;
       
           int h=n*n-1;
        int ans=INT_MAX;
        while(l<=h)
        {
            int mid=l+(h-l)/2;
            if(bfs(grid,mid,n,vis,0,0)){
               ans=min(mid,ans);
                h=mid-1;
            }else
            {
                l=mid+1;
            }
            //memset(vis, 0, sizeof vis);
    
          cout<<mid<<" ";  
        }
        return ans;
    }
};