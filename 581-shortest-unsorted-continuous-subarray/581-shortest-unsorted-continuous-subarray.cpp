class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
    /* int n=nums.size();
        int i=0;
        int j=n-1;
        int pos1=0,pos2=0;
        if()
        while(i<j)
        {
           if( i<=n-1&&nums[i+1]<nums[i]) 
               pos1=i;
            if(j>=0 && nums[j-1]>nums[j] )
                pos2=j;
            i++;
            j--;
        }
        int ans=0;
        if((pos2-pos1)>0)
            ans=(pos2-pos1)+1;
            
        return ans;*/
int start = -1, end = -1, n = nums.size();
    
        int temp = nums[0];
        for(int i = 1; i < n; i++) {
            if(nums[i] < temp) end = i;
            temp = max(temp, nums[i]);
        }

        temp = nums[n - 1];
        for(int i = n - 1; i >= 0; i--) {
            if(temp < nums[i]) start = i;
            temp = min(temp, nums[i]);
        }

        return (start == -1) ? 0 : (end - start) + 1;
    }
};    
