class Solution {
public:
    bool isvalid(int i,int j,int r,int c)
    {
        if(i>=0&&i<r&&j>=0&&j<c)
            return true;
        return false;
    }
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int r=mat.size();
        int c=mat[0].size();
        vector<vector<int>>vis(r,vector<int>(c,-1));
        queue<pair<int,int>>q;
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                if(mat[i][j]==0)
                {
                    q.push({i,j});
                    vis[i][j]=0;
                }
                    
            }
        }
    int dx[4]={0,0,1,-1};
    int dy[4]={1,-1,0,0};
    while(!q.empty())
    {
        int x=q.front().first;
        int y=q.front().second;
        q.pop();
        for(int i=0;i<4;i++)
        {
            int a=dx[i]+x;
            int b=dy[i]+y;
            if(isvalid(a,b,r,c)&&vis[a][b]==-1)
            {
                q.push({a,b});
                vis[a][b]=1+vis[x][y];
            }

        }
    }
    return vis;
    }
};