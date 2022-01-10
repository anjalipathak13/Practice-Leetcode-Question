class Solution {
public:
    int lengthOfLastWord(string s) {
        int l=s.length();
        string ans;
        int i=l-1;
          if(l==1)
              return 1;
         if(s[l-1]==' '){
            while(i>=0){
                if(s[i]!=' ')
                    break;
                i--;
            }}
        while(i>=0)
        {  // ans=ans+s[i];
                if(s[i]==' ')
                    break;
          ans=ans+s[i];
         i--;
        }
        return ans.length();
    }
};