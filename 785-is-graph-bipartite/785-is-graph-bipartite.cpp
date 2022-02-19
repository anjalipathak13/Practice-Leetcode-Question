class Solution {
public:
    bool dfs(vector<vector<int>>& graph,vector<int>&v,vector<int>&color,int node,int c)
    {
        color[node]=c;
        v[node]=1;
        for(auto it: graph[node])
        {   if(v[it]!=0)
             {
            if(color[it]==color[node])
                return false;
             }
            else{
                if(dfs(graph,v,color,it,c^1)==false)
                    return false;
                  }
        }
        return true;
    }
    bool isBipartite(vector<vector<int>>& graph) {
        int n=graph.size();
        vector<int>v(n+1);
        // memset(v,0,sizeof(v));
        vector<int>color(n+1);
        //memset(color,0,sizeof(color));
         for(int i=0;i<n;i++)
         {
    if(v[i]==0 && dfs(graph,v,color,i,0)==false)
                 return false;
         }
        return true;
    }
};