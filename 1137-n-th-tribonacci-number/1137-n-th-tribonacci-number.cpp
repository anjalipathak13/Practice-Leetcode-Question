class Solution {
public:
    int tribonacci(int n) {
       /* if(n<2)
            return n;
        if(n==2)
            return 1;
        vector<int>dp(n+1,-1);
        dp[0]=0;
        dp[1]=1;
        dp[2]=1;
        for(int i=3;i<=n;i++)
            dp[i]=dp[i-3]+dp[i-2]+dp[i-1];
        return dp[n];*/
        if(n<2)
            return n;
        if(n==2)
            return 1;
        int first=0;
        int sec=1;
        int third=1;
        int a=0;
        for(int i=3;i<=n;i++)
        {
             a=first+sec+third;
            first=sec;
        
            sec=third;
            third=a;
        }
        return a;
    }
};