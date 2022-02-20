class Solution {
public:
void dfs(int i,vector<vector<int>>& rooms,vector<int>&vis)
    {
        vis[i]=1;
        for(auto it:rooms[i])
        {
            if(vis[it]==0)
                dfs(it,rooms,vis);
        }
    }
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
       int n=rooms.size();
       vector<int>vis(n,0);
       dfs(0,rooms,vis);
        for(auto v:vis)
        {
            if(!v)
                return false;
        }
         return true;
    }
};