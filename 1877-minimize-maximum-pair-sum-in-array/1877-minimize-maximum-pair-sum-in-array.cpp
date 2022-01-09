class Solution {
public:
    int minPairSum(vector<int>& nums) {
     //2,3,4,4,5,6
        sort(nums.begin(),nums.end());
            int j=nums.size()-1;
        int i=0;
        int maxi=0,sum=0;
        while(i<j)
        {
            sum=nums[i]+nums[j];
            maxi=max(sum,maxi);
            i++;
            j--;
        }
            return maxi;

    }
};