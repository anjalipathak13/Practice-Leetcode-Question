class Solution {
public:
    bool isvalid(int i , int j , int m , int n , vector<vector<bool>> &vis,vector<vector<int>> &mat){
    if(i >=0 && i < m && j >=0 && j < n && !vis[i][j] ){
        return true;
    }
    return false;
}
vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
    int m = mat.size();//number of rows
    int n = mat[0].size();//number of columns
    
    vector<vector<int>> ans(m,vector<int>(n,0));//for storing distance
    vector<vector<bool>> vis(m,vector<bool>(n,0));//for bfs
    queue<pair<int,int>> q;//for processing node level wise 

    for(int i = 0 ; i < m ; i ++){
        for(int j = 0 ; j < n ; j++){
            if(mat[i][j] == 0){//assuming hypothetical  common destination and applying multisouce bfs from all dest (i.e. all 0)   instead of starting from the each sources 
               q.push({i,j});
               vis[i][j] = 1;//mark visited when enque
                }
            }
        }
    //untill queue is empty repeat 
    while(!q.empty())
    {
       //take out  front of queque(using access + pop) for processing the node                 
         pair<int,int> p = q.front();q.pop();
       //seperate (i,j)
        int i = p.first;
        int j = p.second;

        //possible neighbour directions    
        vector<int> dx = {0,1,-1,0};
        vector<int> dy = {1,0,0,-1};

        //trying to go to the neighbour
        for(int k = 0 ; k < 4 ; k++){
             //calculating all possible neighbouring (i,j)
             int curri = i + dx[k];
             int currj = j + dy[k];
            //if valid neighbour then push it in queue for processing
             if(isvalid(curri,currj,m,n,vis,mat)){ 
                 ans[curri][currj] = ans[i][j] + 1;//distance[curr] = distance[parent]+1;
                 vis[curri][currj] = true;//mark visited when enque
                 q.push({curri,currj});//push into queue
                }
        }
                      
     }
                
                
          
    return ans;
        
    }
};