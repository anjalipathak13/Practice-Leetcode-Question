class KthLargest {
public:
    int size;
    priority_queue<int,vector<int>,greater<int>>pq; //minHeap
        
    KthLargest(int k, vector<int>& nums) {
        size = k;
        for(int i=0;i<nums.size();i++){
            pq.push(nums[i]);
            if(pq.size()>k)
                pq.pop();    //minimum element will be popped out
        }
    }
    
    int add(int val) {
        pq.push(val);
        if(pq.size()>size) 
            pq.pop();
        
        return pq.top();
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */