class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int i,j,k;
        j=nums.size()-1;
        int n=nums.size();
        int mini=INT_MAX,ans=0;
      for(int i=0;i<n-2;i++)
        {
          k=i+1;
          j=nums.size()-1;
          while(k<j)
          { 
              int curr=nums[i]+nums[j]+nums[k];
              if(abs(curr-target)<mini){
                  mini=abs(curr-target);
              ans=curr;}
                  
              if(curr>target)
                  j--;
              else if(curr<target)
                  k++;
             else
             {
                 ans=curr;
                 i=n-2;
                 break;
             }
              
          }
        
        }
        return ans;
    }
};