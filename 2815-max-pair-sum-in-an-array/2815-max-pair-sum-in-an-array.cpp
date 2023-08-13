class Solution {
public:
    bool check(int a,int b){
        int maxi1=0;
        while(a!=0){
            int r = a%10;
            maxi1 = max(maxi1,r);
            a = a/10;
        }
         int maxi2=0;
        while(b!=0){
            int r = b%10;
            maxi2 = max(maxi2,r);
            b = b/10;
        }
        
        if(maxi1==maxi2)  return true;
        return false;
    }
    int maxSum(vector<int>& nums) {
        int ans = -1;
        
        for(int i=0;i<nums.size()-1;i++){
            for(int j=i+1;j<nums.size();j++){
                if(check(nums[i],nums[j])){
                   int sum = nums[i]+nums[j];
                    ans = max(ans,sum);
                }
            }
        }
        
        return ans;
    }
};