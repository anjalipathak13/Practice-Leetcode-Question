class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n=nums.size();
        int start=0;
        int end=n-1;
        int ans=0;
        
        if(n==1)return 0;
        while(start<=end){
          int mid=start+(end-start)/2;
        
         if(mid>0&&mid<n-1) //mid is not in corner
        {
            if(nums[mid]>nums[mid-1]&&nums[mid]>nums[mid+1])
                return mid;
            else if(nums[mid]<nums[mid+1])
                start =mid+1;
            else 
                end=mid-1;
        }
        
        else  //mid is  at left end
        {
            if(mid==0)
            {
            if(nums[mid]>nums[mid+1])
                return mid;
            else
                return mid+1;
            }
            else if(mid==n-1) //mid is at right end
            {
                if(nums[mid]>nums[mid-1])
                    return mid;
                else 
                    return mid-1;
            }
                
        }
     

    }
     return ans;      
}
};