class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
     int maxi=0;
        int c=1,i=0;
        if(nums.size()==1 && nums[0]==0)
            return 0;
        if(nums.size()==0)
        return 0;    
        while(i<nums.size()-1)
        { 
            if(nums[i]==0 && nums[i+1]==0)
                c=0;
           else if(nums[i]==nums[i+1] && nums[i]==1){
              c++;
           }
            else {
               // c+=1;
                maxi=max(maxi,c);
                c=1;
            }
            i++;
            
        }
        maxi=max(c,maxi);
        return maxi;
    }
};