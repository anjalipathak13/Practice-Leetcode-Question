class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        unordered_map<int,int>in,f;
        int len=0,de=0;
        for(int i=0;i<nums.size();i++)
        {  if(in.count(nums[i])==0)
            in[nums[i]]=i;
            if(++f[nums[i]]>de){
                de=f[nums[i]];
                len=i-in[nums[i]]+1;
            }else if(de==f[nums[i]])
            {
               len=min(len,i-in[nums[i]]+1);
            }
            
            
        }
                                return len;
    }
                                
};