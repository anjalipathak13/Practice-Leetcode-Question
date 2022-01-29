class Solution {
public:
    int countGoodSubstrings(string s) {
       set<int>se;
        int c=0;
        if(s.size()<3)
            return 0;
        for(int i=0;i<s.size()-2;i++)
        {
            while(1){
            se.insert(s[i]);
            se.insert(s[i+1]);
            se.insert(s[i+2]);
                    
            if(se.size()==3){
                c++;}
            
                se.erase(se.begin(),se.end());
            break;
          }
            
        }
        return c;
    }
};