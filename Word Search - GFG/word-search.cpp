//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
    int ro[4] = {-1,0,1,0};
    int co[4] = {0,-1,0,1};
    bool DFS(int r,int c,int ind,vector<vector<char>>& board, string word,vector<vector<int>>&visited,int N,int M){
        if(ind == word.size()) return true;
        if(r < 0 || r>=N || c<0 || c>=M || visited[r][c]) return false;
        if(word[ind] != board[r][c]) return false;
        visited[r][c] = 1;
        for(int i = 0;i<4;i++){
            int sideRow = r+ro[i];
            int sideCol = c+co[i];
            if(DFS(sideRow,sideCol,ind+1,board,word,visited,N,M)) return true;
        }
        visited[r][c] = 0;
        return false;
    }
    bool isWordExist(vector<vector<char>>& board, string word) {
        // Code here
        int n = board.size();
        int m = board[0].size();
        vector<vector<int>> visited(n,vector<int>(m,0));
        for(int i =0 ;i<n;i++){
            for(int j = 0;j<m;j++){
                if(board[i][j] == word[0]){
                    if(DFS(i,j,0,board,word,visited,n,m)) return true;
                }
            }
        }
        return false;
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<char>>board(n, vector<char>(m, '*'));
		for(int i = 0; i < n; i++)
			for(int j = 0; j < m; j++)
				cin >> board[i][j];
		string word;
		cin >> word;
		Solution obj;
		bool ans = obj.isWordExist(board, word);
		if(ans)
			cout << "1\n";
		else cout << "0\n";
	}
	return 0;
}
// } Driver Code Ends