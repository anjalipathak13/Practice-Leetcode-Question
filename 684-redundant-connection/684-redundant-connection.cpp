class Solution {
public:
 int find_parent(int n,vector<int>&p){
     if(n==p[n])
         return n;
     return find_parent(p[n],p);
 }
    vector<int> findRedundantConnection(vector<vector<int>>& edges) {
        vector<int>p(1001,0);
        int n=edges.size();
        for(int i=0;i<p.size();i++)
            p[i]=i;
        vector<int>res;
        for(auto i:edges)
        {  
            int v1=i[0];
            int v2=i[1];
            int p1=find_parent(v1,p);
            int p2=find_parent(v2,p);
            if(p1==p2)
                res=i;
            p[p1]=p2;
                
            
        }
        return res;
        
    }
};