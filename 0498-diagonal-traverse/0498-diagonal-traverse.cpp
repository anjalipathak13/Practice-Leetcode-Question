class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
       
        int row=0,col=0;
        int n = mat.size();
        int m = mat[0].size();
        vector<int>ans(n*m);
        int i=0;
        bool up=1;
        
        while(row<n && col<m){
            if(up){
                while(row>0 && col<m-1){
                    ans[i++] = mat[row][col];
                    row--;
                    col++;
                }
                ans[i++] = mat[row][col];  //row =0
                if(col==m-1)  //last col h ex-3
                    row++;
                else
                    col++;
               }
           else{   //downward
                while(col>0 && row<n-1){
                    ans[i++] = mat[row][col];
                    row++;
                    col--;
                }  
               ans[i++] = mat[row][col];   //col=0
               if(row==n-1)
                   col++;
               else
                   row++;
              }
           up = !up; 
        }
        
        return ans;
    }
};