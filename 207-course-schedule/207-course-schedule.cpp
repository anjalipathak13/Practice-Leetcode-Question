class Solution {
public:
    bool iscycle(vector<int>&vis,vector<int> adj[],int node)
    {
        if(vis[node]==2)
            return true;
        vis[node]=2;
        for(auto it:adj[node])
        {
            if(vis[it]!=1)
                if(iscycle(vis,adj,it))
                    return true;
            
        }
        vis[node]=1;
        return false;
            
    }
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
       vector<int>adj[numCourses];
        for(auto it: prerequisites)
            adj[it[1]].push_back(it[0]);
        vector<int>vis(numCourses,0);
        for(int i=0;i<numCourses;i++)
            if(vis[i]==0)
                if(iscycle(vis,adj,i))
                    return false;
        return true;
                      
    }
};