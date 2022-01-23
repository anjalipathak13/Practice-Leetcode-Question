class Solution {
public:
    vector<int> findLonely(vector<int>& nums) {
      sort(nums.begin(),nums.end());
        int n=nums.size();
        vector<int>ans;
        if(nums.size()==1)
            return nums;
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++)
        {
            mp[nums[i]]++;
        } 
        if(nums[1]!=nums[0]+1 && mp[nums[0]]==1)
            ans.push_back(nums[0]);
        if(nums[n-2]!=nums[n-1]-1 && mp[nums[n-1]]==1)
            ans.push_back(nums[n-1]);
            
        
           for(int i=0;i<nums.size();i++)
           {
               if(i>0 && i<n-1 && mp[nums[i]]==1)
               {
                   if(nums[i-1]!=nums[i]-1 && nums[i+1]!=nums[i]+1)
                     ans.push_back(nums[i]);
               }
           }
       // for(int i=0;i<ans.size();i++)
           return ans;
            
    }
};