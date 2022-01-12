class Solution {
public:
    void partition(int index, vector<vector<string>>&ans,string s,vector<string>&path)
    {
        if(index==s.size())
        {
            ans.push_back(path);
            return;
        }
        
        for(int i=index;i<s.size();i++)
        {
            if(pallin(s,index,i))
            {
                 path.push_back(s.substr(index,i-index+1));
                 partition(i+1,ans,s,path);
                 path.pop_back();              
            }
        }
        
    }
    bool pallin(string s,int start,int end)
    {
        while(start<=end)
        {
            if(s[start++]!=s[end--])
                return false;
        }
        return true;
    }
    vector<vector<string>> partition(string s) {
        vector<vector<string>>ans;
        vector<string>path;
        partition(0,ans,s,path);
        return ans;
    }
};