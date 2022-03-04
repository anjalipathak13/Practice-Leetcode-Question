class Solution {
public:
    int countHomogenous(string s) {
        int n = s.length();
    if(n == 0){
        return 0;
    }
    long ans=0,c=1;
        long mod=1000000007;
        for(int i=1;i<s.length();i++)
        {
            if(s[i-1]==s[i])
                c++;
            else{
                ans= ((ans+(c*(c+1))/2)%mod)%mod;
                c=1;
            }
        }
         ans= ((ans+(c*(c+1))/2)%mod)%mod;
        return ans%mod;
    }
};