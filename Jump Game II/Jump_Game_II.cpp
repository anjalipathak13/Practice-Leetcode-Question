class Solution {
public:
    int jump(vector<int>& nums) {
        if(nums.size()==1)
        return 0;
    int maxReach = nums[0];
    int steps = nums[0];
    int jumps = 0;
    for(int i=1;i<nums.size()-1;i++)
    {
        maxReach = max(maxReach, nums[i]+i);
        steps--;
        if(steps==0)
        {
            jumps++;
            steps = maxReach - i;
        }
    }
    return jumps+1;
}
};