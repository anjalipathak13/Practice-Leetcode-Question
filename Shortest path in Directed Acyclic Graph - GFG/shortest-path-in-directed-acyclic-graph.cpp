//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
     vector<int> shortestPath(int N,int M, vector<vector<int>>& edges){
        // code here
        vector<pair<int,int>>adj[N];
        for(int i=0 ; i<edges.size() ; i++){
            adj[edges[i][0]].push_back({edges[i][1],edges[i][2]});   //node,dis
        }
        
        vector<int>dist(N,INT_MAX);
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;  //dis,node
        pq.push({0,0});
        dist[0] = 0;
        
        while(!pq.empty()){
            int node = pq.top().second;
            int dis = pq.top().first;
            pq.pop();
            
            for(auto i : adj[node]){
                int adjNode = i.first;
                int edW = i.second;
                if(dist[adjNode]>dist[node]+edW){
                    dist[adjNode] = dist[node]+edW;
                    pq.push({dist[adjNode],adjNode});
                }
            }
        }
        
        vector<int>ans(N);
        for(int i=0;i<dist.size();i++){
            if(dist[i]==INT_MAX)  ans[i] = -1;
            else  ans[i] = dist[i];
        }
        return ans;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> edges;
        for(int i=0; i<m; ++i){
            vector<int> temp;
            for(int j=0; j<3; ++j){
                int x; cin>>x;
                temp.push_back(x);
            }
            edges.push_back(temp);
        }
        Solution obj;
        vector<int> res = obj.shortestPath(n, m, edges);
        for (auto x : res) {
            cout << x << " ";
        }
        cout << "\n";
    }
}

// } Driver Code Ends