class Solution {
public:
    bool possible(vector<int>&nums,int value,int m)
    {
        int sub=1;
        int sum=0;
        for(int i=0;i<nums.size();i++)
        {
           sum+=nums[i];
            if(sum>value){
            sub++;
                sum=nums[i];
            }
        }
            if(sub>m)
                return false;
            else
                return true;
        
     }
    int splitArray(vector<int>& nums, int m) {
     int sum=0, maxi=0;
        for(int i=0; i<nums.size(); i++)
        {
            sum+=nums[i];
            maxi=max(maxi, nums[i]);
        }
        int low=maxi, high=sum;
      int ans=INT_MAX;  
     while(low<=high)
     {
         int mid=low+(high-low)/2;
         if(possible(nums,mid,m))
         {
             ans=mid;
             high=mid-1;
         }
         else 
         {
             low=mid+1;
         }
         
     }
        return ans;
         
    }
};