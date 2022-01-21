class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        vector<string>ans;
        string word;
        //int c=s.length()/k;
        //int left=s.length()%k;
     for(int i=0;i<s.length();i++)
     {
            word+=s[i];
            
        if(word.length()==k) 
        {
            ans.push_back(word);
            word="";
        }
         
     }
       if(word.size()>0 && word.size()!=k)
       {
           while(word.size()!=k)
               word+=fill;
       
        ans.push_back(word);
       }
        return ans;
    }
};