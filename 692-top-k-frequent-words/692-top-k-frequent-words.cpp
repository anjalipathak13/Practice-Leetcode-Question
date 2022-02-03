class Solution {
public:
   static bool cmp(pair<string,int>a,pair<string,int>b)
    {
        if(a.second==b.second)
            return a.first<b.first;
        else
            return a.second>b.second;
    }
    vector<string> topKFrequent(vector<string>& words, int k) {
    unordered_map<string,int>m;
    for(auto it:words)
        m[it]++;
     vector<pair<string,int>>s;
        for(auto it:m)
            s.push_back(it);
        sort(s.begin(),s.end(),cmp);
        vector<string>an;
        int i=0;
        while(k--)
        {
            an.push_back(s[i++].first);
        }
        return an;
    }
};