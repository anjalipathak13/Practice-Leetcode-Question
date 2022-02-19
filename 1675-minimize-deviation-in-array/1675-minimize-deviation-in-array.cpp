class Solution {
public:
    int minimumDeviation(vector<int>& nums) {
      priority_queue<int>p;
        int mini=INT_MAX,diff=INT_MAX;
        for(auto it:nums)
        {
           if(it&1)
               it=it*2;
            mini=min(mini,it);
            p.push(it);
        }
        
        while(p.top()%2==0)
        {
           int mx=p.top();
            p.pop();
            diff=min(diff,mx-mini);
            mini=min(mini,mx/2);
            p.push(mx/2);
            }
        return min(diff,p.top()-mini);
    }
};