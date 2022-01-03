class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
     unordered_map<string,vector<string>>m;
        vector<vector<string>> res;
        for(int i=0;i<strs.size();i++)
        {
            string temp=strs[i];
            string s=temp;
            
            sort(temp.begin(),temp.end());
            m[temp].push_back(s);
            
        }
        for(auto p:m)
            res.push_back(p.second);
        return res;
    }
};