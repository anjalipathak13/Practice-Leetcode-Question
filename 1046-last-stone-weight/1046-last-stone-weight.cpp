class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
      priority_queue<int>p;
    for(int i=0;i<stones.size();i++)
    p.push(stones[i]);
        while(!(p.size()==1) && !(p.empty()))
        {
            int n1=p.top();
            p.pop();
            int n2=p.top();
            p.pop();
            if(n1==n2)
                continue;
            else
                p.push(n1-n2);
             }
        if(p.size()==1)
            return p.top();
        else
            return 0;
        }
};