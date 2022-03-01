class Solution {
public:
    vector<int> countBits(int n) {
       vector<int>ans;
        vector<int>dp(n+1);
        dp[0]=0;
        ans.push_back(0);
        for(int i=1;i<=n;i++)
        {
            if(i%2==0){
                ans.push_back(dp[i/2]);
                dp[i]=dp[i/2];
            }
            else{
                 ans.push_back(dp[i/2]+1);
                dp[i]=dp[i/2]+1;
            }
        }
        return ans;
    }
};