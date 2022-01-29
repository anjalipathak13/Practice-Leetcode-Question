class Solution {
public:
    void fliprow(vector<vector<int>>& grid,int row,int n)
    {
        for(int i=0;i<n;i++)
        {
            grid[row][i]=1-grid[row][i];
                
        }
        
    }
       
     void flipcol(vector<vector<int>>& grid,int col,int m)
    {
        for(int i=0;i<m;i++)
        {
            grid[i][col]=1-grid[i][col];
                
        }
        
    }
     
    bool iscount(vector<vector<int>>& grid,int col,int m)
    {
        int zero=0,one=0;
        for(int i=0;i<m;i++){
            if(grid[i][col]==0)
                zero++;
            else
                one++;
        }
        if(zero>one)
            return true;
        else
            return false;
    }
    int matrixScore(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
      for(int i=0;i<m;i++)
      {
          if(grid[i][0]==0)
              fliprow(grid,i,n);
      }
      for(int i=0;i<n;i++)
      {
          if(iscount(grid,i,m))
              flipcol(grid,i,m);
      }
        
     int sum=0;
      for(int i=0;i<m;i++)
      {  int deci=0;
          int p=n-1;
          for(int j=0;j<n;j++)
          {
              deci+=grid[i][j]*pow(2,p--);
              
               
          }
       sum+=deci;
      }
     return sum;   
        
    }
};