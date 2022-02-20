class Solution {
public:
    void dfs(int node,vector<int>adj[],vector<int>&vis)
    {
        vis[node]=1;
        for(auto it:adj[node])
        {
            if(vis[it]==0)
                dfs(it,adj,vis);
        }
        
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n=isConnected.size(); 
       vector<int>vis(n+1,0);
        vector<int>adj[n];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(isConnected[i][j]==1)
                    adj[i].push_back(j);
            }
        }
        int c=0;
        for(int i=0;i<n;i++)
        {
           if(vis[i]==0){
               c++;
           dfs(i,adj,vis);
           }
         }
        return c;
    }
};