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
    int m_k;
    KthLargest(int k, vector<int>& nums) {
        m_k=k;
        for(int x:nums)add(x);
    }
    
    int add(int val) {
        if(minheap.size()<m_k)minheap.push(val);
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