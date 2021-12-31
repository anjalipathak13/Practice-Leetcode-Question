class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
      int n=nums.size();
        sort(nums.begin(),nums.end());
        vector<vector<int>> res;
        for(int i=0;i<n;i++)
        {   int target1=target-nums[i];
            for(int j=i+1;j<n;j++)
            {
                int target2=target1-nums[j];
                int right=n-1;
                int left=j+1;
                while(left<right)
                {
                    if(nums[left]+nums[right]>target2)
                        right--;
                    else if(nums[left]+nums[right]<target2)
                        left++;
                    else{
                        vector<int>quad(4,0);
                        quad[0]=nums[i];
                        quad[1]=nums[j];
                        quad[2]=nums[left];
                        quad[3]=nums[right];
                        res.push_back(quad);
                        while(left<right && nums[left]==quad[2])
                            ++left;
                        while(left<right && nums[right]==quad[3])
                            --right;
                        
                            
                    }
                }
                
                while(j+1<n && nums[j]==nums[j+1])
                    ++j;
            }
                // Processing the duplicates of number 1
            while (i + 1 < n && nums[i + 1] == nums[i]) ++i;
                       
        }
        return res;
    }
};