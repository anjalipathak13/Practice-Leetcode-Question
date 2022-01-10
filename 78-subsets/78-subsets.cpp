class Solution {
public:
     void subset(int ind,vector<int>&nums,vector<vector<int>>&ans,vector<int>ds)
     {
        if(ind==nums.size())
        {
            ans.push_back(ds);
            return;
        }
         ds.push_back(nums[ind]);
         subset(ind+1,nums,ans,ds);
         ds.pop_back();
         subset(ind+1,nums,ans,ds);
             
     }
    vector<vector<int>> subsets(vector<int>& nums) {
      vector<vector<int>>ans;
        vector<int>ds;
        subset(0,nums,ans,ds);
        return ans;
    }
};