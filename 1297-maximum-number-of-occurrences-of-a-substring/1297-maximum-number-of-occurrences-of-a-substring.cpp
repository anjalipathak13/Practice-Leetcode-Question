class Solution {
public:
    int maxFreq(string s, int maxLetters, int minSize, int maxSize) {
        unordered_map<string,int>v;
        unordered_map<char,int>m;
        for(int i=0;i<=s.length()-minSize;i++)
        {   int c=0;
            string str;
            for(int j=0;j<minSize;j++)
            {
               if(m.find(s[i+j])==m.end())
               {
                   m[s[i+j]]++;
                   c++;
                   
               } 
               str+=s[i+j]; 
                
            }
         if(c<=maxLetters)
         {
             v[str]++;
         }
         
         m.clear();
        }
        
        int maxi=0;
     for(auto it:v)
     {
         maxi=max(it.second,maxi);
     }
        return maxi;
    }
};