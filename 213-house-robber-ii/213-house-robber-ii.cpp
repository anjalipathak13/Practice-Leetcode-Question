class Solution {
public:
    int money(vector<int>& nums)
    {
       int n=nums.size();
     int prev2=0;
       int prev=nums[0];
      for(int i=1;i<n;i++){
          int pick=nums[i];
          if(i>1)
              pick+=prev2;
          int not_pick=prev;
          int curr=max(pick,not_pick);
          prev2=prev;
          prev=curr;
          
      }
       return prev;
    }
    
    int rob(vector<int>& nums) {
        if(nums.size()==1)
            return nums[0];
    vector<int>temp1;
    vector<int>temp2;
    int n=nums.size();
    for(int i=0;i<n;i++)
    {
        if(i!=0)
            temp1.push_back(nums[i]);
    
        if(i!=n-1)
         temp2.push_back(nums[i]);
    }
       // vector<int>dp(n+1,-1);
        int ans1=money(temp1);
        int ans2=money(temp2);
     return max(ans1,ans2);   
    }
};