class Solution {
public:
    int robber(vector<int>& nums,int n,vector<int>& dp)
    {if(n==0)
        return nums[n];
     if(n<0)
         return 0;
     if(dp[n]!=-1)
         return dp[n];
     int pick=nums[n]+robber(nums,n-2,dp);
     int not_pick=robber(nums,n-1,dp);
     return dp[n]=max(pick,not_pick);
    }
    int rob(vector<int>& nums) {
     /* int money=0,money2=0;
        int n=nums.size();
        for(int i=0;i<n;i+=2)
        {
            money+=nums[i];
        }
        int n1=nums.size()-1;
        for(int i=n1;i>=0;i-=2)
        {
            money2+=nums[i];
        }
        return max(money,money2);*/
        int n=nums.size();
        vector<int>dp(n+1,-1);
        return robber(nums,nums.size()-1,dp);
        
    }
};