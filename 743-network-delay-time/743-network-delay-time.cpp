class Solution {
public:
    
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
    void find_path( vector<pair<int,int>>adj[],int src,int n,vector<int>&dist)
    {
        dist[src]=0;
        pq.push({0,src});
        while(!pq.empty())
        {
            auto node=pq.top();
            pq.pop();
            int par_node=node.second;
            int wt=node.first;
            for(auto child:adj[par_node])
            {
                if(dist[par_node]+child.second<dist[child.first]){
                    dist[child.first]=dist[par_node]+child.second;
                    pq.push({dist[child.first],child.first});
                }
                
            }
        }
    }
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
       vector<pair<int,int>> adj[n+1];
      /*  for(int i=0;i<times.size();i++)
                adj[times[i][0]].push_back(make_pair(times[i][1],times[i][2]));
        vector<int> dist(n+1,INT_MAX);
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
        pq.push({0,k});
        dist[k]=0;
        while(!pq.empty())
        {
            pair<int,int> t=pq.top();
            pq.pop();
            for(pair<int,int> it:adj[t.second])
            {
                if(dist[it.first]>t.first+it.second)
                {
                    dist[it.first]=t.first+it.second;
                    pq.push({dist[it.first],it.first});
                }
            }
        }
        int res=0;
        for(int i=1;i<=n;i++)
        {
            if(dist[i]==INT_MAX)
                return -1;
            res=max(res,dist[i]);
        }
		return res; 
    }*/
        for(int i=0;i<times.size();i++)
            adj[times[i][0]].push_back({times[i][1],times[i][2]});
        vector<int>dist(n+1,INT_MAX);
        find_path(adj,k,n,dist);
        int result=0;
        for(int i=1;i<=n;i++)
        {
           if(dist[i]==INT_MAX)
               return -1;
            result=max(result,dist[i]);
            
        }
        return result;
    }
        };