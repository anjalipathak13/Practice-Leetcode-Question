class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        int fresh_oranges=0;
        
        int count=0;
        queue<pair<int,int>> q;
        
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==2){
                    q.push({i,j});
                }
                else if(grid[i][j]==1){
                    fresh_oranges++;
                }
            }
        }
        if(fresh_oranges==0) return 0;
        
        int x[4]={-1,0,1,0};
        int y[4]={0,-1,0,1};
        
        while(!q.empty()){
            int len=q.size();
            count++;
            while(len){
                pair<int,int> p=q.front();
                q.pop();
                for(int i=0;i<4;i++){
                    int xd=p.first+x[i];
                    int yd=p.second+y[i];
                    if(xd>=0 && xd<m && yd>=0 && yd<n && grid[xd][yd]==1){
                        grid[xd][yd]=2;
                        q.push({xd,yd});
                    }
                }
                len--;
            }
        }
        
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==1){
                    return -1;
                }
            }
        }
        
        return count-1;
    }
};