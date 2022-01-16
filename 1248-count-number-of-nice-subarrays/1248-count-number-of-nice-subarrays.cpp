class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        unordered_map<int,int>m;
        int curr_sum=0;int c=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]%2==0)
                nums[i]=0;
            else
                nums[i]=1;
        }
        for(int i=0;i<nums.size();i++)
        {
            curr_sum+=nums[i];
            if(curr_sum==k)
            {
                c+=1;
            }
            if(m.find(curr_sum-k)!=m.end())
            {
                c+=m[curr_sum-k];
            }
            
            m[curr_sum]++;
        }
        return c;
    }
};