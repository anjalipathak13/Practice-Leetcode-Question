class Solution {
public:
    bool checkInclusion(string s1, string s2) {
      vector<int>v1(26,0);
      vector<int>v2(26,0);
        if(s1.size()>s2.size())
            return false;
        for(int i=0;i<s1.length();i++)
            v1[s1[i]-97]++;
         for(int i=0;i<s1.length();i++)
            v2[s2[i]-97]++;
        int l=s1.length();
        for(int i=0;i<s2.length()-l+1;i++)
        {  
         if(i!=0)
         {
             v2[s2[i-1]-97]--;
             v2[s2[i+l-1]-97]++;
         }
            if(v1==v2)
                return true;
            
        }
        return false;
    }
};