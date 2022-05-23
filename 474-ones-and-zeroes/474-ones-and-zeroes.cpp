class Solution {
    int fn(int ind , vector<string>& strs, int m ,int n, vector<vector<vector<int>>>& dp){
        if(m==0 && n==0){
            return 0;
        }
        if(ind < 0){
            return 0;
        }
        if(dp[ind][m][n] != -1) return dp[ind][m][n];
        int notTake = fn(ind-1,strs,m,n,dp);
        int nm = 0, nn = 0;
        for(auto c : strs[ind]){
            if(c=='0') nm++;
            else nn++;
        }
        int Take = 0;
        if(nm <= m && nn <= n){
            Take = 1 + fn(ind-1,strs,m-nm , n - nn,dp);
        }
        return dp[ind][m][n] = max(Take,notTake);
    }
public:
    int findMaxForm(vector<string>& strs, int m, int n) {
        int sz = strs.size();
        vector<vector<vector<int>>> dp(sz+1,vector<vector<int>>(m+1,vector<int>(n+1,-1)));
        return fn(sz-1,strs,m,n,dp);
    }
};