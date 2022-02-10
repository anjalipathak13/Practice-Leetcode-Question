class MyHashMap {
    vector<int>h;
public:
    
    MyHashMap():h(1000001,-1){  
    }
    
    void put(int key, int value) {
       h[key]=value; 
    }
    
    int get(int key) {
       // int val=h[key];
        return h[key];
    }
    
    void remove(int key) {
     h[key]=-1;
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */