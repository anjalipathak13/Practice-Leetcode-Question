class Solution {
public:
    int minDeletion(vector<int>& nums) {
        int ans=0;
        for(int i=0;i<nums.size()-1;i++)
            if(nums[i]==nums[i+1])
                ans++;
        else
            i++;
        
        if((nums.size()-ans)%2!=0)
            ans++;
        return ans;
    }
};