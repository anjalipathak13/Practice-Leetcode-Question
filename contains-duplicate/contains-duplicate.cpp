class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++)
        {
               if(i==nums.size()-1)
                   return false;
                if(nums[i]==nums[i+1]){
                    return true;
                    break;
                       }
        }
        return false;
        
    }
};