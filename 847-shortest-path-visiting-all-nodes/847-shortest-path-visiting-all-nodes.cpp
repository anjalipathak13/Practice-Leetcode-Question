class Solution {
public:
    int shortestPathLength(vector<vector<int>>& graph) {
       int i,n=graph.size(),j;
        
        queue<vector<int>>q;
        set<pair<int,int>>s;
        for(i=0;i<n;i++)
        {
            vector<int>v(3,0);
            int mask=(1<<i);
            int node=i;
            int cost=0;
            v[0]=cost;
            v[1]=node;
            v[2]=mask;
            q.push(v);
            s.insert({i,mask});
        }
        int ans=0;
        while(!q.empty())
        {
            vector<int>z=q.front();
            q.pop();
            if(z[2]==(1<<n)-1)
            {
                ans=z[0];
                break;
            }
            for(auto j:graph[z[1]])
            {
                int mask=z[2]|(1<<j);
                if(s.find({j,mask})==s.end())
                {
                    q.push({z[0]+1,j,mask});
                    s.insert({j,mask});
                }
            }
            
            
        }
        return ans;
        
    }
};