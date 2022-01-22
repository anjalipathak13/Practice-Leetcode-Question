class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int m=mat.size();
        int sum=0;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<m;j++)
            {
               if(i==j ||i+j==m-1)
                   sum+=mat[i][j];
            }
        }
        int in=(m-1)/2;
       // int sub=mat[in][in];
        //sum=sum-sub;
        return sum;
    }
};