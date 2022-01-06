class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int j=0;
        if(nums.size()==0)
            return 0;
        for(int i=1;i<nums.size();i++)
        { 
             
            if(nums[i]!=nums[j])
            {   j++;
                nums[j]=nums[i];
                }
        
    }
    
        return j+1;
    }
};