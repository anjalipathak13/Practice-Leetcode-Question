class Solution {
public:
    bool isSubsequence(string s, string t) {
        int j=0;
        int n2=s.length();
        int n=t.length();
        if(n2>n)
            return false;
        if(n2==0)
            return true;
        if(n==0)
            return false;
        for(int i=0;i<t.length();i++)
        {
            if(s[j]==t[i])
            {
                n2--;
                j++;
                
            }
            if(n2==0)
                return true;
        }
        return false;
    }
};