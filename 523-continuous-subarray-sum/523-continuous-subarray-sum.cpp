class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>m;
        int prefixsum=0;
        for(int i=0;i<nums.size();i++)
        {
            prefixsum+=nums[i];
            prefixsum%=k;
            if(prefixsum==0 && i)
                return true;
             if(m.find(prefixsum)!=m.end()){
                if((i-m[prefixsum])>1)
                    return true;
             }
            else
            m[prefixsum]=i;
            
            
        }
        return false;
    }
};