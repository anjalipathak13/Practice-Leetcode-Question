class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& str) {
      unordered_map<string,vector<string>>m;
        vector<vector<string>>ans;
        for(auto i:str)
        {
            string s=i;
            string temp=s;
            sort(temp.begin(),temp.end());
            m[temp].push_back(s);
        }
        for(auto j:m)
            ans.push_back(j.second);
        return ans;
    }
};