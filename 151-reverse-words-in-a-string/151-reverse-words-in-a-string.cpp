class Solution {
public:
  string reverseWords(string s) {
        vector<string>ans;
        stringstream str(s);
      string word;
      while(str>>word)
      {
          ans.push_back(word);
      }
      reverse(ans.begin(),ans.end());
      string res;
      int f=0;
      for(auto i:ans)
      { 
           if(f==0)
           {
               res=i;
               f=1;
           }else{
         res+=" "+i;
           }
         }
     return res;     
    }
};