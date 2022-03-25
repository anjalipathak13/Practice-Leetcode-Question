class Solution {
public:
   // typedef pair<int, int> pi;
    static bool cmp(int a,int b)
      {
          return a>b;
      }
    int twoCitySchedCost(vector<vector<int>>& costs) {
    /* priority_queue<pi, vector<pi>, greater<pi> > p1;
        int n=costs.size();
     priority_queue<pi, vector<pi>, greater<pi> > p2;
     for(int i=0;i<costs.size();i++)
     {
         p1.push({costs[i][0],i});
         p2.push({costs[i][1],i});
         }
    vector<int>vis(n,0);
    int c1=0,c2=0,sum1=0,sum2=0;
    for(int i=0;i<n;i++)
    {  
       while(1 && !p1.empty())
       {  
           
        pair<int, int> top = p1.top();
        int v1=top.first;
        int in1=top.second;
           p1.pop();
       if(vis[in1]==0 && c1!=n/2)
       {
           sum1+=v1;
           
           c1++;
           vis[in1]=1;
           break;
           
       }
     } 
        
        while(1 && !p2.empty())
       {  
         pair<int, int> top1 = p2.top();
        int v2=top1.first;
        int in2=top1.second;
           p2.pop();
       if(vis[in2]==0 && c2!=n/2)
       {
           sum2+=v2;
           c2++;
           vis[in2]=1;
           break;
           
           
       }
     }   
        
        
            
        }
        
       return sum1+sum2; */
        
     vector<int>v;
        int ans=0;
        for(auto it:costs)
        {
           ans+=it[0];
            v.push_back(it[0]-it[1]);
        }
        sort(v.begin(),v.end(),cmp);
        for(int i=0;i<v.size()/2;i++)
            ans-=v[i];
        return ans;
        
    }
};