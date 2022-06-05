class Solution {
public:
    
  void queen(int col,int &count, vector<string>&board, vector<int>&leftRow        ,vector<int>&upperDiagonal ,vector<int>&lowerDiagonal,int n){
        if(col==n)
        {    
            count++;
           return;
        }
        for(int row=0;row<n;row++)
        {
            if(leftRow[row]==0 && upperDiagonal[(n-1)+(col-row)]==0 && lowerDiagonal[col+ row]==0)    {
                leftRow[row]=1;
                upperDiagonal[(n-1)+(col-row)]=1;
                lowerDiagonal[col+ row]=1;
                board[row][col]='Q';
                queen(col+1,count,board,leftRow,upperDiagonal,lowerDiagonal,n);
                leftRow[row]=0;
                upperDiagonal[(n-1)+(col-row)]=0;
                lowerDiagonal[col+ row]=0;
                board[row][col]='.';
                
                
            }
        }
       // return count;
    }
    
    
    
    
    int totalNQueens(int n) {
        vector<string>board(n);
        string s(n,'.');
        for(int i=0;i<n;i++)
            board[i]=s;
           int count=0;
        vector<int>leftRow(n,0),upperDiagonal(2*n-1,0),lowerDiagonal(2*n-1,0);
       queen(0, count,board,leftRow,upperDiagonal,lowerDiagonal,n);
        return count;
        
    }
};