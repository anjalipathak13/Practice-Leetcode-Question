class Solution {
public:
    int findMaxValueOfEquation(vector<vector<int>>& points, int k) {
    int maxi=INT_MIN;
        priority_queue<pair<int,int>>pq;
        for(auto p:points)
        {
            while(pq.size() && (p[0]-pq.top().second>k))
                pq.pop();
            if(!pq.empty())
                maxi=max(maxi,p[0]+p[1]+pq.top().first);
           pq.push(make_pair(p[1]-p[0], p[0]));
        }
        return maxi;
    }
};