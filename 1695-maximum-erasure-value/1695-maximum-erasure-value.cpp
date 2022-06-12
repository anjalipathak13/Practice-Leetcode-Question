class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
      /* unordered_map<int,int>m;
        int l=0;
        int r=0;
        int sum=0;
        int len=0;
        int p=0,q=0;
        int n=nums.size();
        while(r<n)
        {
            if(m.find(nums[r])!=m.end())
                l=max(l,m[nums[r]]+1);
            m[nums[r]]=r;
        
            if(len<(r-l+1))
            {
               len=(r-l+1);
                p=l;
                q=r;
            }  
            
            r++;
        }
    for(int i=p;i<=q;i++)
    sum+=nums[i];
    return sum; */
        int maxSum = 0, currSum = 0;
		unordered_map<int,int> seen; 
        int i = 0,j = 0; 
        while(j < nums.size())
        {
            if(!seen[nums[j]]) 
            {
                currSum += nums[j]; 
                seen[nums[j]]++; 
                j++; 
                maxSum = max(maxSum, currSum);
            }
            else 
            {
                currSum -= nums[i]; 
                seen[nums[i]]--;
                i++;
            }
        }
        return maxSum;
    
    }
};