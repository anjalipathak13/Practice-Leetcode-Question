class Solution {
public:
void dfs(int sr,int sc,vector<vector<int>>& image,vector<vector<int>>&ans,int newcolor,int inicolor, vector<int>delrow, vector<int>delcol)     {
        ans[sr][sc] = newcolor;
        int n = image.size();
        int m = image[0].size();
    
       for(int i=0;i<4;i++){  //traversing to the del vectors
          int nrow = sr+delrow[i];
          int ncol = sc+delcol[i]; 
           // check if it fullfil the condititons
           if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && image[nrow][ncol]==inicolor && ans[nrow][ncol]!=newcolor){
               dfs(nrow,ncol,image,ans,newcolor,inicolor,delrow,delcol);  //recursive call
               } 
          }
        
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int inicolor = image[sr][sc];
        
        vector<vector<int>>ans = image;
        vector<int>delrow = {-1,0,1,0};
         vector<int>delcol = {0,+1,0,-1};
        
        dfs(sr,sc,image,ans,color,inicolor,delrow,delcol);
        return ans;
    }
};