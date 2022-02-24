class Solution {
public:
    //typedef pair<int, int> pi;
  
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
       // priority_queue<pi,vector<pi>,greater<pi>>p;
         priority_queue<vector<int>> p;
     for(int i=0;i<points.size();i++) 
     {
         int a=pow(points[i][0],2)+pow(points[i][1],2);
        
         p.push({a,i});
         if(p.size()>k)
             p.pop();
     }
        
        vector<vector<int>>ans;
        while(k--){
            vector<int>res=p.top();
            
            p.pop();
            
            
            ans.push_back({points[res[1]][0],points[res[1]][1]});
        }
        
        return ans;
    }
};