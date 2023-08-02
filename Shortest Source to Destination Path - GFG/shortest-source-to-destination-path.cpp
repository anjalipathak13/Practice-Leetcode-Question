//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int shortestDistance(int N, int M, vector<vector<int>> A, int X, int Y) {
         if(A[0][0] == 0)
            return -1;
            
        vector<vector<int>>vis(N,vector<int>(M,0));
        vector<vector<int>>dist(N,vector<int>(M,INT_MAX));
        int delrow[]={-1,0,0,+1};
        int delcol[]={0,-1,+1,0};
        
        queue<pair<int,int>>q;  
        q.push({0,0});
        vis[0][0] = 1;
        dist[0][0] = 0;
        
        while(!q.empty()){
            int px = q.front().first;
            int py = q.front().second;
            q.pop();
           
            
            for(int i=0;i<4;i++){
                int nrow = px+delrow[i];
                int ncol = py+delcol[i];
                
                if(nrow<N && nrow>=0 && ncol>=0 && ncol<M && A[nrow][ncol]==1 && !vis[nrow][ncol]){
                    if(dist[nrow][ncol]>=dist[px][py]+1)
                    {
                     dist[nrow][ncol]=dist[px][py]+1;
                     vis[nrow][ncol]=1;
                     q.push({nrow,ncol});
                    }
                }
            }
            
        }
            
            if(dist[X][Y]!=INT_MAX)
            return dist[X][Y];
            
            return -1;
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, M, x, y;
        cin >> N >> M;
        vector<vector<int>> v(N, vector<int>(M));
        for (int i = 0; i < N; i++)
            for (int j = 0; j < M; j++) cin >> v[i][j];
        cin >> x >> y;
        Solution ob;
        cout << ob.shortestDistance(N, M, v, x, y) << "\n";
    }
}
// } Driver Code Ends