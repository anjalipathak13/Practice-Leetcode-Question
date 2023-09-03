//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    vector<vector<char>> fill(int n, int m, vector<vector<char>> mat)
    {   
        queue<pair<int,int>>q;
        vector<vector<int>>vis(n,vector<int>(m,0));
        
        for(int i=0;i<n;i++){
            if(mat[i][0]=='O'){
                q.push({i,0});
                vis[i][0] = 1;
            }  
            if(mat[i][m-1]=='O'){
               q.push({i,m-1});
               vis[i][m-1] = 1;
            }  
        }
        
        for(int j=0;j<m;j++){
            if(mat[0][j]=='O'){
                q.push({0,j});
                vis[0][j] = 1;
            }
            if(mat[n-1][j]=='O'){
                q.push({n-1,j});
                vis[n-1][j] = 1;
            }
        }
        
        int delrow[4] = {-1,0,+1,0};
        int delcol[4] = {0,+1,0,-1};
        
        while(!q.empty()){
            int row = q.front().first;
            int col = q.front().second;
            q.pop();
            for(int i=0;i<4;i++){
                int nrow = row+delrow[i];
                int ncol = col+delcol[i];
                if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && mat[nrow][ncol]=='O' && !vis[nrow][ncol]){
                    q.push({nrow,ncol});
                    vis[nrow][ncol] = 1;
                }
            }
        }
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(mat[i][j]=='O' && !vis[i][j])  mat[i][j] = 'X';
            }
        }
        return mat;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        vector<vector<char>> mat(n, vector<char>(m, '.'));
        for(int i = 0;i < n;i++)
            for(int j=0; j<m; j++)
                cin>>mat[i][j];
        
        Solution ob;
        vector<vector<char>> ans = ob.fill(n, m, mat);
        for(int i = 0;i < n;i++) {
            for(int j = 0;j < m;j++) {
                cout<<ans[i][j]<<" ";
            }
            cout<<"\n";
        }
    }
    return 0;
}
// } Driver Code Ends