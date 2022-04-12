class Solution {
public:
    int dx[8]={-1,0,1,1,1,0,-1,-1};
        int dy[8]={1,1,1,0,-1,-1,-1,0};
    int live(vector<vector<int>>& board,int i,int j,int n,int m)
    {
        int c=0;
       for(int k=0;k<8;k++){
            int x = i+dx[k];
            int y = j+dy[k];
            if(x>=n || y>=m ||x<0|| y<0)continue;
            if(board[x][y]==1){
                c++;
            }
        }
        
        return c;
    }

    
   void change(vector<vector<int>>& board,int i,int j,int c)
   {
       if(board[i][j]==1)
       {
           if(c<2)
               board[i][j]=0;
           else if(c==2||c==3)
               board[i][j]=1;
           else if(c>3)
               board[i][j]=0;
       }
       else
       {
           if(c==3)
               board[i][j]=1;
       }
       
       
   }
    void gameOfLife(vector<vector<int>>& board) {
         vector<vector<int>> copy = board;
        int n=board.size();
        int m=board[0].size();
     for(int i=0;i<board.size();i++)
     {   
         for(int j=0;j<board[0].size();j++){
             int co= live(copy,i,j,n,m);
             change(board,i,j,co);
             
             
         }
    }
    }
};