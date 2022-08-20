class Solution {
public:
    int minRefuelStops(int target, int startFuel, vector<vector<int>>& stations) {
     //keep all the station can reach from that fuel and fill the maximum fuel out of that until fuel < target 
        priority_queue<int>pq;
        int ind=0;
        int mini=0;
        while(startFuel<target)
        {
            while(ind<stations.size()&&startFuel>=stations[ind][0])
            {
                pq.push(stations[ind][1]);
                    ind++;
            }
            if(pq.empty())return -1;
            startFuel+=pq.top();
            pq.pop();
            mini++;
                
        }
        return mini;
    }
};