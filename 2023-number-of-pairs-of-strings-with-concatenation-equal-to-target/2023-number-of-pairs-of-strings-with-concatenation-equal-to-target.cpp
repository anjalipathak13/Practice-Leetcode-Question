class Solution {
public:
    int numOfPairs(vector<string>& nums, string target) {
      //int n=nums.length();
        int c=0;
        for(int i=0;i<nums.size();i++)
        {
            for(int j=0;j<nums.size();j++)
            {
                if(i!=j)
                {
                    string st=nums[i]+nums[j];
                    if(st==target)
                        c++;
                    
                }
            }
        }
        return c;
    }
};