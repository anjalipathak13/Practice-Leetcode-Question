class Solution {
public:
    int kthFactor(int n, int k) {
       priority_queue<int,vector<int>,greater<int>>p;
        for(int i=1;i<=n;i++)
        {
            if(n%i==0)
                p.push(i);
        }
        if(k>p.size())
            return -1;
        k=k-1;
        
        cout<<p.top();
        while(k--)
            p.pop();
        int a=p.top();
        return a;
    }
};