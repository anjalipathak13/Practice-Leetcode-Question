class FreqStack {
public:
    priority_queue<pair<int,pair<int,int>>>pq;
    unordered_map<int,int>m;
    int pos=0;
    FreqStack() {
        
    }
    
    void push(int val) {
      pq.push(make_pair(++m[val],make_pair(++pos,val)));  
    }
    
    int pop() {
        auto x=pq.top();
        pq.pop();
        int s=x.second.second;
    m[s]--;
        return s;
    }
};

/**
 * Your FreqStack object will be instantiated and called as such:
 * FreqStack* obj = new FreqStack();
 * obj->push(val);
 * int param_2 = obj->pop();
 */