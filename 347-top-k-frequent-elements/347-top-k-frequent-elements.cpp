class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
      unordered_map<int,int>m;
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]]++;
        }
        vector<pair<int,int>>v;
        vector<int>p;
        for(auto it:m)
            v.push_back({it.second,it.first});
        sort(v.begin(),v.end());
        int l=v.size();
        //if(k==1)
          //  p.push_back(v[l-1].second);
        for(int i = l-1;i >= l-k;i--)   
        {
           p.push_back(v[i].second);
            
        }
        return p;
    }
};