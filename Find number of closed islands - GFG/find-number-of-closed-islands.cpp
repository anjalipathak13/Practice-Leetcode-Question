//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution {
    void dfs(int sr,int sc,vector<vector<int>>&vis,vector<vector<int>>&matrix,int n ,int m,int delrow[],int delcol[]){
        vis[sr][sc] = 1;
        
        for(int i=0;i<4;i++){
            int nrow = sr+delrow[i];
            int ncol = sc+delcol[i];
            if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && !vis[nrow][ncol] && matrix[nrow][ncol]==1){
                dfs(nrow,ncol,vis,matrix,n,m,delrow,delcol);
            }
        }
    }
    public:
    int closedIslands(vector<vector<int>>& matrix, int N, int M) {
        vector<vector<int>>vis(N,vector<int>(M,0));
        int delrow[] = {-1,0,+1,0};
        int delcol[] = {0,+1,0,-1};
        //traverse to the boundaries
        for(int i=0 ; i<N ;i++){
            if(!vis[i][0] && matrix[i][0]==1)
               dfs(i,0,vis,matrix,N,M,delrow,delcol);
            if(!vis[i][M-1] && matrix[i][M-1]==1)
               dfs(i,M-1,vis,matrix,N,M,delrow,delcol);
        }
        
        for(int i=0 ; i<M ;i++){
            if(!vis[0][i] && matrix[0][i]==1)
               dfs(0,i,vis,matrix,N,M,delrow,delcol);
            if(!vis[N-1][i] && matrix[N-1][i]==1)
               dfs(N-1,i,vis,matrix,N,M,delrow,delcol);
        }
        int c=0;
        for(int i=0;i<N;i++){
            for(int j=0;j<M;j++){
                if(!vis[i][j] && matrix[i][j]==1){
                   c++;
                   dfs(i,j,vis,matrix,N,M,delrow,delcol);
                }
            }
        }
        return c;
    }
};

//{ Driver Code Starts.
int main() {
	int t;
	cin>>t;
	while(t--)
	{
        int N, M;
        cin >> N >> M;
        vector<vector<int>>matrix(N, vector<int>(M, 0));
        for(int i=0; i<N; i++)
            for(int j=0; j<M; j++)
                cin >> matrix[i][j];
                
        Solution obj;
        int ans = obj.closedIslands(matrix, N, M);
        cout << ans << "\n";
    }
	
	return 0;
	
}


// } Driver Code Ends