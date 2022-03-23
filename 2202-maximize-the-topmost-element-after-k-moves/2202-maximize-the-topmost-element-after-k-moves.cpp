class Solution {
public:
    int maximumTop(vector<int>& nums, int k) {
       int maxi=0;
        int n=nums.size();
       
     if(n==1 && k%2==1)
         return -1;
        for(int i=0;i<n&&i<k-1;i++)
        {  
            if(nums[i]>maxi )
                maxi=nums[i];
        }
          int maxi2=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]>maxi2)
                maxi2=nums[i];
        }
       // cout<<maxi2;
        if(k>n)
            return maxi2;
        
    if(k<n)
    {
        maxi=max(maxi,nums[k]);
    }
        
    return maxi;    
    }
};
//5/ 2/ 2/ 2  6 0 8
  //  max=5
//2 2 
//k=5  n=2