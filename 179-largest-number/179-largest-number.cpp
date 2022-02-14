class Solution {
public:
    static bool cmp(int a,int b)
    {
        string x=to_string(a);
        string y=to_string(b);
        return x+y>y+x;
            
    }
    string largestNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end(),cmp);
        string ans;
        for(auto it:nums)
        ans+=to_string(it);
        if(nums[0]==0)
            return "0";
        return ans;
            
    }
};