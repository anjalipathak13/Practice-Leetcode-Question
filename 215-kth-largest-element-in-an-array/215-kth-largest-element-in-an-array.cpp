class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
       int n=nums.size();
        //sort(nums.begin(),nums.end());
        //return nums[n-k];
        priority_queue<int>p;
       for(int i=0;i<n;i++)
       {
           p.push(nums[i]);
       }
        for(int i=0;i<k-1;i++)
          p.pop(); 
        
        int no=p.top();
        return no;
    }
};