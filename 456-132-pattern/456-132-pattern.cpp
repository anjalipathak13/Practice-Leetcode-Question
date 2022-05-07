class Solution {
public:
    bool find132pattern(vector<int>& nums) {
    stack<int>s;
        int k=INT_MIN;
        for(int i=nums.size()-1;i>=0;i--)
        {
            if(nums[i]<k)
                return true;
            while(!s.empty() && s.top()<nums[i])
            {
                k=s.top();
                s.pop();
                
            }
            s.push(nums[i]);
        }
       return false;
        
    }
};