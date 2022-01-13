class Solution {
public:
    
    bool checkRecord(string s) {
        int ab=0,l=0;
        if(s.size()==0)
            return false;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='A')
            ab++;
            if(ab==2)
                return false;
            if(s[i]=='L')
            {
                while(s[i]==s[i+1] && i<s.length()){
                    l++;
                    i++;
                    }
            }
           if(l+1>=3)
               return false;
            l=0;
        }
        return true;
    }
};