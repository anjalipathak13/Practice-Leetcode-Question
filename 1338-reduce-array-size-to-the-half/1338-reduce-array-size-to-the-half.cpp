class Solution {
public:
    int minSetSize(vector<int>& arr) {
      unordered_map<int,int>m;
        for(int i=0;i<arr.size();i++)
            m[arr[i]]++;
        int n=arr.size();
        int c=0;
        priority_queue<int>p;
        for(auto it:m)
            p.push(it.second);
        int deleted=0;
        while(!(p.empty()))
        {
            deleted+=p.top();
            p.pop();
            c++;
            if(deleted>=n/2)
              break;  
            
        }
        return c;
    }
};