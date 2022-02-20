class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        if(grid.empty())
            return 0;
      int total=0,c=0,days=0;
        int n=grid.size();
        int m=grid[0].size();
      queue<pair<int,int>>q;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]!=0)
                    total++;
                if(grid[i][j]==2)
                    q.push({i,j});
            }
            
        }
        int dx[4]={0,0,1,-1};
        int dy[4]={1,-1,0,0};
        while(!q.empty())
        {  
            int k=q.size();
          c+=k;
            while(k--)
            {
                int x=q.front().first;
                int y=q.front().second;
                q.pop();
                for(int i=0;i<4;i++){
                int xi=x+dx[i];
                int yi=y+dy[i];
    if(xi<0||yi<0||xi>=n||yi>=m||grid[xi][yi]!=1)
                        continue;
                    grid[xi][yi]=2;
                    q.push({xi,yi});
                    
                    }}
             if(!q.empty())
                days++;}
        if(total==c)
            return days;
        else
            return -1;
    }
};