//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
     void dfs(int node,int &timer,int parent,vector<int> &disc,vector<int> &low,
            vector<int> &ans,unordered_map<int,bool> &vis,vector<int>adj[]){
      vis[node]=true;
      disc[node]=low[node]=timer++;
      
      int child=0;
      for(auto nbr : adj[node]){
          if(vis[nbr]==false){
              child++;
              dfs(nbr,timer,node,disc,low,ans,vis,adj);
              
              low[node]=min(low[node],low[nbr]);
              if(low[nbr]>=disc[node] && parent!=-1){
                  ans[node]=1;
              }
          }else if(nbr!=parent){
              low[node]=min(low[node],disc[nbr]);
          }
      }
      if(parent==-1 && child > 1){
          ans[node]=1;
      }
  }
    vector<int> articulationPoints(int V, vector<int>adj[]) {
        int timer=0;
        vector<int> disc(V,-1);
        vector<int> low(V,-1);
        
        int parent=-1;
        unordered_map<int,bool> vis;
        
        vector<int>ap(V,0);
        for(int i=0;i<V;i++){
            if(!vis[i]){
                dfs(i,timer,parent,disc,low,ap,vis,adj);
            }
        }
        vector<int> ans;
        for(int i=0;i<V;i++){
            if(ap[i]==1){
                ans.push_back(i);
            }
        }
        if(ans.size()==0){
            return {-1};
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int V, E;
		cin >> V >> E;
		vector<int>adj[V];
		for(int i = 0; i < E; i++){
			int u, v;
			cin >> u >> v;
			adj[u].push_back(v);
			adj[v].push_back(u);
		}
		Solution obj;
		vector<int> ans = obj.articulationPoints(V, adj);
		for(auto i: ans)cout << i << " ";
		cout << "\n";
	}
	return 0;
}
// } Driver Code Ends