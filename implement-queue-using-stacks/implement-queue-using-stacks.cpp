class MyQueue {
public:
   stack<int> st1;
    stack<int> st2;
    MyQueue() {
        
    }
    
    void push(int x) {
	//put all the elements of st2 in st1
        while(!st2.empty()){
            int t=st2.top();
            st2.pop();
            st1.push(t);
        }
		// then push the element x
        st1.push(x);
		// then put all the elements of st1 in st2
        while(!st1.empty()){
            int t=st1.top();
            st1.pop();
            st2.push(t);
        }
        
    }
    
    int pop() {
        int t=st2.top();
        st2.pop();
        return t;
    }
    
    int peek() {
        return st2.top();
    }
    
    bool empty() {
        return st2.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */