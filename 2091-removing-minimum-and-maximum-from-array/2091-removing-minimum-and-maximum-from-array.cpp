class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n=nums.size();
        int mini=INT_MAX;
        int maxi=INT_MIN;
        int a=0;
        int b=0;
     for(int i=0;i<n;i++)
     {
       if(nums[i]>maxi){
            maxi=nums[i];
            a=i;
            }
         if(nums[i]<mini){
             mini=nums[i];
             b=i;
         }
     }
       int min_a=0;
        int min_b=0;
        min_a=min(a+1,n-a);
        min_b=min(b+1,n-b);
        int res1=max(a+1,b+1);
        int res2=max(n-a,n-b);
        int res3=min_a+min_b;
        //return min_a+min_b;
       /* int ans=0;
        if(min_a==a+1 && min_b==b+1)
        {
         ans=max(min_a,min_b);  
        }else if(min_a==n-a && min_b==n-b)
        {
            ans=max(min_a,min_b);
        }
        else{
            ans=min_a+min_b;
        }
        return ans;*/
        int ans=INT_MAX;
        ans=min(res1,res2);
        ans=min(ans,res3);
        return ans;
    }
};