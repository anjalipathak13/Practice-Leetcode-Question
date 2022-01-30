class KthLargest {
public:
   /* priority_queue<int,vector<int>,greater<int>>p;
    int s;
    KthLargest(int k, vector<int>& nums) {
      
        for(int x:nums)add(x);
        s=k;
    }
    
    int add(int val) {
        if(p.size()<s)
            p.push(val);
        else{
            
            if(val>p.top())
            {
                p.pop();
                p.push(val);
            }
        }
        return p.top();
    }
};*/
    priority_queue<int,vector<int>,greater<int>> minheap;
    int m;
    KthLargest(int k, vector<int>& nums) {
        m=k;
        for(int i=0;i<nums.size();i++)
        {
            minheap.push(nums[i]);
            if(minheap.size()>k)
                minheap.pop();
            
        }
    }
    
    int add(int val) {
        if(minheap.size()<m)minheap.push(val);
        else
        {
            if(val>minheap.top())
            {
                minheap.pop();
                minheap.push(val);
            }
        }
        return minheap.top();
    }
};
/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */