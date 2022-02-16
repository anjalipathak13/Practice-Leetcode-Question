class Solution {
public:
    int findMin(vector<int>& nums) {
        int right=nums.size()-1;
        int left=0;
        if(nums[left]<nums[right])
            return nums[0];
        if(nums.size()==1)
            return nums[0];
        while(left<=right)
        {
            int mid=left+(right-left)/2;
            if(nums[mid+1]<nums[mid])
                return nums[mid+1];
            if(nums[mid-1]>nums[mid])
                return nums[mid];
            if(nums[mid]>nums[left])
                left=mid+1;
            else
                right=mid-1;
                
        }
    
    return 0;
    }
};