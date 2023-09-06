//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution 
{
    public:
    void dfs(int node,vector<int>adj[],vector<int>&vis,set<int>&st){
        vis[node] = 1;
        st.insert(node);
        
        for(auto it:adj[node]){
           if(st.find(it)==st.end())
            dfs(it,adj,vis,st);
        }
    }
    //Function to find a Mother Vertex in the Graph.
	int findMotherVertex(int V, vector<int>adj[])
	{
	    
	    vector<int>vis(V);
	    
	    for(int i=0;i<V;i++){
	        set<int>st;
	        if(!vis[i])
	        dfs(i,adj,vis,st);
	        if(st.size()==V)   return i;
	    }
	    
	    return -1;
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
		}
		Solution obj;
		int ans = obj.findMotherVertex(V, adj);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends