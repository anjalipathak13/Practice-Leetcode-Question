class Solution {
public:
    
    
    int dp[1001];
    int solve(string s,int ind){
        if(ind==s.length())return 1;
        if(s[ind]=='0')return 0;
        if(dp[ind]!=-1)return dp[ind];
        int way1=solve(s,ind+1);
        int way2=0;
        int num=stoi(s.substr(ind,2));
        if(ind<s.length()-1 && num<=26)
            way2=solve(s,ind+2);
      return  dp[ind]=way1+way2;
    }
    int numDecodings(string s) {
     memset(dp,-1,sizeof(dp)); 
        return solve(s,0);
    }
};