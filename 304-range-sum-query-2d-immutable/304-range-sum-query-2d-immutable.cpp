class NumMatrix {
public:
    vector<vector<int>>dp;
   // int dp[201][201];
    NumMatrix(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        if(!n)
            return;
        if(!m)
            return;
        dp=matrix;
       for(int i=0;i<n;i++)
       {
           for(int j=1;j<m;j++)
           {   
               
               dp[i][j]+=dp[i][j-1];
              
           }
       }
    }
    int sumRegion(int row1, int col1, int row2, int col2) {
       int sum=0;
        for(int i=row1;i<=row2;i++)
            sum+=dp[i][col2]-(col1?dp[i][col1-1]:0);
        return sum;
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */