vector<int>adj[n];
vector<bool>visited(n,0);
for(int i=0;i<n;i++){   // conversion into adjacent matrix
for(int j=0;j<n;j++){
if(v[i][j]==1)
adj[i].push_back(j);
}