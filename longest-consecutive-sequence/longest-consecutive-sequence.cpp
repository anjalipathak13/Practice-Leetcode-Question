class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
       unordered_set<int>hashset;
       // for(int i=0;i<nums.size();i++)
        //    hashset.insert(nums[i]);
        for(auto num:nums)
            hashset.insert(num);
        int ans=0;
        for(auto num:nums)
        {
            if(!hashset.count(num-1))
            {
                int currentnum=num;
                int currentcount=1;
                while(hashset.count(currentnum+1)){
                    currentcount+=1;
                    currentnum+=1;
                    
                }
            
                ans=max(ans,currentcount);
            }
        }
        return ans;
    }
};