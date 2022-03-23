class Solution {
public:
   static bool cmp(pair<int,int>&a,pair<int,int>&b)
   {
       if(a.first<b.first)
           return false;
       return true;
   }
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
      unordered_map<int,int>m;
          int n=arr.size();
          for(int i=0;i<n;i++)
              m[arr[i]]++;
      /*  vector<pair<int,int>>p;
        for(auto i:m)
            p.push_back({i.second,i.first});
        sort(p.begin(),p.end(),cmp);
        
        while(k!=0)
        { 
            int s=p.size();
            if(p[s-1].first<=k)
            {
                k=k-(p[s-1].first);
                p.pop_back();
                
            }
            else
            {
                k=0;
                
            }
            
            
        }
            
        int ans=p.size();
       return ans; */ 
        priority_queue<int,vector<int>,greater<int>> p;
        for(auto i:m){
            p.push(i.second);
        }
        while(k>0){
            k-=p.top();
            if(k>=0)
                p.pop();
        }
        return p.size();
    }
};