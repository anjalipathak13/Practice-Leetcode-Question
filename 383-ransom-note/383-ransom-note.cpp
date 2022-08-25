class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
      vector<int>f(26,0);
     // int f2[26];
        for(int i=0;ransomNote[i]!='\0';i++)
            f[ransomNote[i]-97]++;
        for(int i=0;magazine[i]!='\0';i++)
            f[magazine[i]-97]--;
        for(int i=0;i<26;i++)
        {
            if(f[i]>0)
                return false;
        }
        return true;
    }
};