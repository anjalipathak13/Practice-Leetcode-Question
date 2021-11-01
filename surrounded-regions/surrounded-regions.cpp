class Solution {
public:
   
    void solve(vector<vector<char>>& board) {
        int n=board.size();
        if(n<=2)
            return;
        int m=board[0].size();
        if(m<=2)
            return;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {

                    if((i==0||j==0||i==n-1||j==m-1)&&board[i][j]=='O')
                        change(board,i,j);
                
            }
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(board[i][j]=='O')
                    board[i][j]='X';
                else if(board[i][j]=='*')
                    board[i][j]='O';
            }
        }
    }
     void change(vector<vector<char>>& board,int i,int j)
    {
        if(i>=0 && j>=0 && i<board.size() && j<board[0].size()&& board[i][j]=='O'){
            board[i][j]='*';
        change(board,i+1,j);
        change(board,i-1,j);
        change(board,i,j+1);
        change(board,i,j-1);
    }
     }
};