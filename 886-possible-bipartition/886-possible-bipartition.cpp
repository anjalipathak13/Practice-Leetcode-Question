class Solution {
public:
bool dfs(vector<vector<int>>&adj,int i,vector<int>&color)
{
  queue<int>q;
    q.push(i);
    color[i]=1;
    while(!q.empty())
    {
        int node=q.front();
        q.pop();
        for(auto it:adj[node])
        {
            if(color[it]==-1)
            {
              color[it]=1-color[node];
                q.push(it);
            }else if(color[it]==color[node]){
                return false;
            }
        }
    }
    return true;
    }
    bool possibleBipartition(int n, vector<vector<int>>& dislikes) {
         vector<vector<int>> adj(n+1);
        for(auto i: dislikes) {
            adj[i[0]].push_back(i[1]);
            adj[i[1]].push_back(i[0]);
        }
    
        vector<int>color(n+1,-1);
      
        for(int i=1;i<=n;i++)
        { 
            if(color[i]==-1)
     if(dfs(adj,i,color)==false)
             return false;
        }
        return true;
    }
};