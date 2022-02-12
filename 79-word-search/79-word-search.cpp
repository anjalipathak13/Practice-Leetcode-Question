class Solution {
public:
    bool dfs(vector<vector<char>>& board,int i,int j,int ind,string word,int n,int m)
    {
        if(ind==word.length())
            return true;
        if(i<0 || i>=n || j<0 || j>=m || board[i][j]!=word[ind])
            return false;
        board[i][j]='0';
        bool ans=dfs(board,i-1,j,ind+1,word,n,m)||dfs(board,i+1,j,ind+1,word,n,m)||dfs(board,i,j-1,ind+1,word,n,m)||dfs(board,i,j+1,ind+1,word,n,m);
           board[i][j]=word[ind];
        return ans;
        
    }
    bool exist(vector<vector<char>>& board, string word) {
        int n=board.size();
        int m=board[0].size();
       for(int i=0;i<board.size();i++)
       {
           for(int j=0;j<board[i].size();j++)
           {
               if(board[i][j]==word[0]&&dfs(board,i,j,0,word,n,m))
                   return true;
           }
       }
        return false;
    }
};