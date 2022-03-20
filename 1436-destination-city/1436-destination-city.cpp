class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
      unordered_map<string,int>m;
        for(auto it:paths)
            m[it[0]]++;
        for(auto i:paths)
            if(m[i[1]]<1)
                return i[1];
        
        return "";
    }
};