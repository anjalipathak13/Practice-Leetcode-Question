//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    vector<vector<int>> chefAndWells(int n,int m,vector<vector<char>> &c){
        int delrow[]={-1,0,+1,0};
        int delcol[]={0,+1,0,-1};
         vector<vector<int>>vis(n,vector<int>(m,0));
         vector<vector<int>>dis(n,vector<int>(m,-1));
          queue<pair<pair<int,int>,int>>q;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(c[i][j]=='N') {
                    dis[i][j]=0;
                    vis[i][j]=1;
                }
                if( c[i][j]=='W'){
                    vis[i][j] = 1;
                    q.push({ {i,j},0});
                    dis[i][j] = 0;
                }
                
                
                if(c[i][j]=='.') dis[i][j]=0;
            }
        }
         while(!q.empty()){
           int row = q.front().first.first;
           int col = q.front().first.second;
           int step = q.front().second;
           q.pop();
           for(int i=0;i<4;i++){
               int nrow=row+delrow[i];
               int ncol=col+delcol[i];
               if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && !vis[nrow][ncol] &&  c[nrow][ncol] != 'N'){
                   if(c[nrow][ncol]=='H') dis[nrow][ncol] = step+2;
                   vis[nrow][ncol] = 1;
                   q.push({{nrow,ncol},step+2});
               }
           }
          
       }
        return dis;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<vector<char>> c(n,vector<char>(m));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>c[i][j];
            }
        }
        Solution ob;
        vector<vector<int>> res=ob.chefAndWells(n,m,c);
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cout<<res[i][j]<<" ";
            }
            cout<<endl;
        }
    }
}
// } Driver Code Ends