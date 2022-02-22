class Solution {
public:
    int path(int i,int j,int n,vector<vector<int>>& matrix, vector<vector<int>>&dp)
    {
        
        if( j>=n || j<0)
            return 1e9;
        if(i==n-1 )
            return matrix[i][j];
        if(dp[i][j]!=-1)
            return dp[i][j];
        
        int down=matrix[i][j]+path(i+1,j,n,matrix,dp);
        int rd=matrix[i][j]+path(i+1,j+1,n,matrix,dp);
        int ld=matrix[i][j]+path(i+1,j-1,n,matrix,dp);
        int mini=min(down,rd);
        return dp[i][j]= min(mini,ld);
        
    }
    int minFallingPathSum(vector<vector<int>>& matrix) {
      int n=matrix.size();
        int mini=INT_MAX;
        vector<vector<int>>dp(n,vector<int>(n,-1));
      for(int i=0;i<n;i++)
      {  int ans=path(0,i,n,matrix,dp);
          mini=min(mini,ans);
      }
        return mini;
    }
};