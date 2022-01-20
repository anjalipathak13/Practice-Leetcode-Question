class Solution {
public:
    int getMaximumGenerated(int n) {
     vector<int>dp(n+2,0);
        dp[0]=0;
        dp[1]=1;
        for(int i=1;i<=n/2;i++)
        {
            dp[2*i]=dp[i];
            dp[(2*i)+1]=dp[i]+dp[i+1];
        }
        int max=0;
        
        for(int i=0;i<=n;i++)
        {
           if(max<dp[i])
               max=dp[i];
        }
        return max;
    }
};