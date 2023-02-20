class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
       int n =nums.size();
        
            int in=0;
        int min=INT_MAX;
        for(int i=0;i<n;i++)
        {
            if(nums[i]==target){
               in=i;
                break;
            }
            else if(nums[i]<target){
                min=nums[i];
            in=i+1;
            }
        }
        return in;
    }
};