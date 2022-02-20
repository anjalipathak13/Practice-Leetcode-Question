class Solution {
public:
    bool ischeck(string st)
    {
        int l=0;
        int h=st.length()-1;
        while(l<=h)
        {
            if(st[l]!=st[h])
                return false;
            l++;
            h--;
        }
        return true;
    }
    bool isPalindrome(string s) {
        string st;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]>='a' && s[i]<='z')
            st+=s[i];
        else if(s[i]>='A' && s[i]<='Z'){
            st+=tolower(s[i]);
        }else if(s[i]>='0'&&s[i]<='9')
            st+=s[i];
    }cout<<st;
        if(ischeck(st))
            return true;
        else
            return false;
    }
};