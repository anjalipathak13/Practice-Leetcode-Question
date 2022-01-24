class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
       int m=matrix.size();//no of rows
        int n=matrix[0].size();//no of columns
        int t=0,b=m-1,l=0,r=n-1;
        int dir=0;
        vector<int>ans;
        while(t<=b && l<=r)
        {
          if(dir==0)
          {
              for(int i=l;i<=r;i++)
              ans.push_back(matrix[t][i]);
              t++;
              
          }
          else if(dir==1)
           {
               for(int i=t;i<=b;i++)
               ans.push_back(matrix[i][r]);
               r--;
               
           }
         else if(dir==2)
           {
               for(int i=r;i>=l;i--)
               ans.push_back(matrix[b][i]);
               b--;
               
           } 
          else if(dir==3)
           {
               for(int i=b;i>=t;i--)
               ans.push_back(matrix[i][l]);
               l++;
               
           } 
        dir=(dir+1)%4;
        }
        return ans;
    }
};