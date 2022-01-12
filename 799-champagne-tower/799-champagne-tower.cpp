class Solution {
public:
    double champagneTower(int poured, int query_row, int query_glass) {
      vector<vector<double>> v(query_row+10,vector<double>(query_row+10,0));
        v[0][0]=poured;
      for(int i=0;i<query_row+2;i++)
      {
          for(int j=0;j<=i;j++)
          {
              if(v[i][j]>=1)
              {
                  v[i+1][j]+=(v[i][j]-1)/2.0;
                  v[i+1][j+1]+=(v[i][j]-1)/2.0;
                  v[i][j]=1;
              }
          }
      }
        return v[query_row][query_glass];
    }
};