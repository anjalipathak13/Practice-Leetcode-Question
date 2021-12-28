class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        
      for(int i=0;i<nums.size();i++)
      {
        int no=nums[i];
          while(no>0&&no<=nums.size()&&nums[no-1]!=no)
          {
              int t=nums[no-1];
              nums[no-1]=no;
              no=t;
          }
      }
        
    for(int i=0;i<nums.size();i++)
    {
        if(nums[i]!=i+1)
            return i+1;
    }
        return nums.size()+1;
        
    }
};