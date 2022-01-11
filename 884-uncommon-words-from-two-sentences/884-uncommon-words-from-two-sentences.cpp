class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
      string s=s1+" "+s2;
        string str;
        unordered_map<string,int>m;
        vector<string>v;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]>='a' && s[i]<='z')
                str+=s[i];
            if( s[i+1]==' ' || s[i+1]=='\0'){
                m[str]++;
                str="";
            }
            
        }
        for(auto &p: m)
        {
            if(p.second==1)
                v.push_back(p.first);
        }
        return v;
    }
};