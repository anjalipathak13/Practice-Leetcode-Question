class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
       unordered_set<int>hashset;
        for(int i=0;i<nums.size();i++)
            hashset.insert(nums[i]);
       
        int ans=0;
        for(int i=0;i<nums.size();i++)
        {
            if(hashset.find(nums[i]-1)==hashset.end())
            {
                int currentnum=nums[i];
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