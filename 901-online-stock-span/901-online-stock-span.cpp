class StockSpanner {
public:
    stack<int>st;
    vector<int>arr;
    int i=0;
    StockSpanner() {
        
    }
    
    int next(int price) {
     arr.push_back(price); 
        int ans=0;
        while(!st.empty()&&arr[st.top()]<=price)st.pop();
        if(st.empty())ans= i+1;
        else
            ans= i-st.top();
        st.push(i);
        i++;
        return ans;
        
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */