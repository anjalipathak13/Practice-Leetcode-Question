class Solution {
public:
    int arrayNesting(vector<int>& nums) {
        
        int c=0,maxi=0;
        for(int i=0;i<nums.size();i++){
            int j=i;
        while(nums[j]!=-1)
        {  
            int k=j;
          j=nums[j];
            nums[k]=-1;
             c++;
          }
         maxi=max(maxi,c); 
            c=0;
        }
       
        return maxi;
    }
};