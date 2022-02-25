class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int dx[8]={-1,1,0,0,-1,1,1,-1};
        int dy[8]={0,0,1,-1,1,1,-1,-1};
        if(grid[0][0]==1)
            return -1;
        queue<vector<int>>q;
        q.push({0,0,1});
        while(!q.empty())
        {
            vector<int>res=q.front();
            q.pop();
            int x=res[0];
            int y=res[1];
            int c=res[2];
            if(x==n-1&&y==m-1)
               return c;
            for(int i=0;i<8;i++)
            {
                int p1=x+dx[i];
                int p2=y+dy[i];
                if(p1>=0&&p2>=0&&p1<n&&p2<n&&grid[p1][p2]==0)
                {
                    grid[p1][p2]=-1;
                    q.push({p1,p2,c+1});
                }
            }
            
            }
        return -1;
    }
};