class Solution {
public:
    int maxSubArray(vector<int>& nums) {
     int max_end=0;
      int max_so_far=INT_MIN;
        for(int i=0;i<nums.size();i++)
        {
            max_end=max_end+nums[i];
            if(max_end>max_so_far)
                max_so_far=max_end;
            if(max_end<0)
                max_end=0;
        }
        return max_so_far;
    }
};