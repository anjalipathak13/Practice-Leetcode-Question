class Solution {
public:
void dfs(vector<vector<int>>&graph,vector<int>&curr,vector<vector<int>>&ans,int node,int des)
{   curr.push_back(node);
    if(node==des-1){
        ans.push_back(curr);
    }
    for(auto it: graph[node])
    {
       // curr.push_back(node);
        dfs(graph,curr,ans,it,des);
    }
    curr.pop_back();
}
         
         
vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {  
    int n=graph.size();
        vector<vector<int>>ans;
        vector<int>curr;
        
        dfs(graph,curr,ans,0,n);
        return ans;
    }
};