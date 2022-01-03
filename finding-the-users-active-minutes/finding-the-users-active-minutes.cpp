class Solution {
public:
    
    vector<int> findingUsersActiveMinutes(vector<vector<int>>& logs, int k) {
        vector<int>res(k,0);
        unordered_map<int,unordered_set<int>> m;
        for(int i=0;i<logs.size();i++)
        {
            int id=logs[i][0];
            int time=logs[i][1];
            m[id].insert(time);
        }
        for(auto itr=m.begin();itr!=m.end();itr++)
        {
            int uam=itr->second.size();
            if(uam<=k)
                res[uam-1]++;
        }
        return res;
    }
};