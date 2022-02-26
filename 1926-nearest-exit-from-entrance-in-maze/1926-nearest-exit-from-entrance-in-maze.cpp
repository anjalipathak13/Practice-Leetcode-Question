class Solution {
public:
    int nearestExit(vector<vector<char>>& maze, vector<int>& entrance) {
       int n=maze.size();
       int m=maze[0].size();
       queue<vector<int>>q;
        q.push({entrance[0],entrance[1]});
        int dx[4]={1,-1,0,0};
        int dy[4]={0,0,-1,1};
        int c=1;
        maze[entrance[0]][entrance[1]]='+';
        while(!q.empty())
        {   
            int s=q.size();
            
            while(s--){
            vector<int>res=q.front();
            int x=res[0];
            int y=res[1];
            
            q.pop();
           
            
            for(int i=0;i<4;i++)
            {
                int p1=x+dx[i];
                int p2=y+dy[i];
                if(p1<0||p2<0||p1>=n||p2>=m||(maze[p1][p2]=='+'))
                    continue;
                if(maze[p1][p2]=='.'&&(p1==0||p1==n-1||p2==0||p2==m-1))
                return c;
                
              
                    q.push({p1,p2});
                    maze[p1][p2]='+';
                
                 }}
            c++;
         }
        return -1;
    }
};