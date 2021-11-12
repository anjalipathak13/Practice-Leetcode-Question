class Solution {
public:
    void permutation(vector<int>& nums, int l, vector<vector<int>>& ans)
    {
        if(l == nums.size())
        {
            ans.push_back(nums);
            return;
        }
        else
        {
            for(int i=l ; i<nums.size() ; i++)
            {
                swap(nums[i], nums[l]);
                permutation(nums, l+1, ans);
                swap(nums[i], nums[l]);
            }
        }
    }
    
public:
    vector<vector<int>> permute(vector<int>& nums) 
    {
        vector<vector<int>> ans;
        permutation(nums, 0, ans);
        return ans;
    }
};