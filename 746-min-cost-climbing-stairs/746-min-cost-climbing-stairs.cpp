class Solution {
public:
   /* int climb(vector<int>& cost,int n,int i)
    {  int right=INT_MAX;
        if(i>=n)
            return 0;
      int left=climb(cost,n,i+1);
        
         right=climb(cost,n,i+2);
        
        return min(left,right)+cost[i];
        
    }*/
    
    int minCostClimbingStairs(vector<int>& cost) {
    int n=cost.size();
     vector<int>dp(n+2);
     dp[n]=0;
     dp[n+1]=0;
        for(int i=n-1;i>=0;i--){
            dp[i]=cost[i]+min(dp[i+1],dp[i+2]);
    }
    return min(dp[0],dp[1]);
}
};