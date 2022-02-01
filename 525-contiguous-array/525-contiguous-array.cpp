class Solution {
public:
    int findMaxLength(vector<int>& nums) {
     /*// int ones=0;
      //  for(int i=0;i<nums.size();i++)
         //   ones+=nums[i];
       int maxi=0;
        int n=nums.size();
        //if(n/ones==2)
          //  return n;
    for (int i=0; i <n; i++)
      {
        
    for (int j=i; j<n; j++)
      {
        int o=0;
        int z=0;
    for (int k=i; k<=j; k++){
        if(nums[k]==0)
            z++;
           else
           o++;
            }
    if(z==o)
    {
        maxi=max(maxi,z+o);
    }
        
    
    }
}
        return maxi;
    } */
 unordered_map<int,int>m;
        int sum=0;
        int maxi=0;
 for(int i=0;i<nums.size();i++)
 {
     sum+=nums[i];
     if(nums[i]==0)
         sum=sum-1;
     if(sum==0)
         maxi=max(maxi,i+1);
     if(m.find(sum)==m.end())
     {
         m[sum]=i;
     }
     if(sum!=0 && m.find(sum)!=m.end())
     {
         maxi=max(maxi,i-m[sum]);
     }
 }
        return maxi;
    }      
};
