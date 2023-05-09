class Solution {
public:
    void dfs(int node,vector<vector<int>>& graph,int V,vector<int>&output,vector<vector<int>>&ans){
        
        output.push_back(node);
        
        if(node == V){   //reached it destiantion
            ans.push_back(output);
        }
        
        for(auto it : graph[node]){
                dfs(it,graph,V,output,ans);
        }
        
        output.pop_back();  //backtrack the output 
             
    }
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        vector<int>output;
        vector<vector<int>>ans;
        
        int V = graph.size()-1; //no of rows = nodes
        dfs(0,graph,V,output,ans);
        return ans;
    }
};