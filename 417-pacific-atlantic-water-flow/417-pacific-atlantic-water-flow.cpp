class Solution {
public:
    vector<vector<int>> store;
    int m,n;
    vector<vector<vector<bool>>> vis;
    void dfs(int i,int j,int choice,int val,vector<vector<int>>& h){
        if(i>=m or i<0 or j>=n or j<0 or vis[i][j][choice]) return;       
        if(h[i][j]<val) return; //water can not flow from lower mountain to higher mountain 
        //choice 0 means pacific.
        //choice 1 means Atlantic.
        vis[i][j][choice] = true;        
        store[i][j]++;
        dfs(i+1,j,choice,h[i][j],h);
        dfs(i,j+1,choice,h[i][j],h);
        dfs(i,j-1,choice,h[i][j],h);
        dfs(i-1,j,choice,h[i][j],h);   
    }   
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& h) {      
       m = h.size();
       n = h[0].size();
       store.resize(m,vector<int>(n,-1));
       vis.resize(m,vector<vector<bool>>(n,vector<bool>(2,false)));       
        for(int i=0;i<m;i++){
            dfs(i, 0, 0, -int(1e8),h);
        }
        for(int j=0;j<n;j++){
            dfs(0, j,0, -int(1e8),h);
        }
        for(int i=0;i<m;i++){
            dfs(i, n-1, 1, -int(1e8),h);
        }
        for(int j=0;j<n;j++){
            dfs(m-1, j,1, -int(1e8),h);
        }
        vector<vector<int>> ans;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(store[i][j]==1){
                    ans.push_back({i,j});
                }
            }
        }
        return ans;
    }
};