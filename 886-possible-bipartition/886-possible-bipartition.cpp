class Solution {
public:
bool dfs(vector<vector<int>>&adj,int i,vector<int>&v,vector<int>&color,int c)
{
   v[i]=1;
   color[i]=c;
        for(auto it:adj[i])
        {
            if(!v[it])
            {
                if(dfs(adj,it,v,color,c^1)==false)
                    return false;
            }else{
                
                if(color[it]==color[i])
                    return false;
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
        vector<int>v(n+1,0);
        vector<int>color(n+1,-1);
      
        for(int i=1;i<=n;i++)
        {
 if(v[i]==0 && (dfs(adj,i,v,color,0)==false))
                return false;
        }
        return true;
    }
};