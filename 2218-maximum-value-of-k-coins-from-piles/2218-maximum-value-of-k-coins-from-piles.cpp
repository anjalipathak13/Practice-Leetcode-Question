class Solution {
public:
    int maxValueOfCoins(vector<vector<int>>& piles, int k) {
        int n=piles.size();
        vector<vector<int>> dp(n, vector<int> (k+1,0));
        for(int i=0;i<n;i++){
            dp[i][0]=0;
        }
        int sum=0;
        for(int i=1;i<=k and i<=piles[0].size();i++){
            sum+=piles[0][i-1];
            dp[0][i]=sum;
        }
        for(int i=1;i<n;i++){
            for(int j=1;j<=k;j++){
                int notPick=dp[i-1][j];
                int pick=0;
                int sum=0;
                for(int k=1;k<=j and k<=piles[i].size();k++){
                    sum+=piles[i][k-1];
                    pick=max(pick,sum+dp[i-1][j-k]);
                }
                dp[i][j]=max(pick,notPick);
            }
        }
        return dp[n-1][k];
    }
};