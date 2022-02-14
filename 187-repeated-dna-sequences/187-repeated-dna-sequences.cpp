class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
    unordered_map<string,int>m;
    int j=0;
        vector<string>ans;
        if(s.length()<10)
            return ans;
    while(j<=s.length()-10)
    {
      string a=s.substr(j,10);
        m[a]++;
        j++;
    }
  //  vector<string>ans;
      for(auto it:m)  
      {
          if(it.second>1)
           ans.push_back(it.first);   
      }
        return ans;
    }
};
//AAAAAAAAAAAAA
//0123456789101112