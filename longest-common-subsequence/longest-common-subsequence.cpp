class Solution {
public:
    
    int lcs(string s1,string s2,int m,int n)
    {
        int dp[m+1][n+1];
        int i,j;
        for(i=0;i<=m;i++)
        {
            for(j=0;j<=n;j++)
            {
                if(i==0||j==0)
                    dp[i][j]=0;
                else if(s1[i-1]==s2[j-1])
                    dp[i][j]=1+dp[i-1][j-1];
                else
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
        return dp[m][n];
    }    
    
    
    int longestCommonSubsequence(string text1, string text2) {
        int l1=text1.size();
        int l2=text2.size();
      int ans=lcs(text1,text2,l1,l2);
        return ans;
    }
};