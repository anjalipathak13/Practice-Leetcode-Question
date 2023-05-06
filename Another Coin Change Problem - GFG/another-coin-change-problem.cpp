//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

class Array {
  public:
    template <class T>
    static void input(vector<T> &A, int n) {
        for (int i = 0; i < n; i++) {
            scanf("%d ", &A[i]);
        }
    }

    template <class T>
    static void print(vector<T> &A) {
        for (int i = 0; i < A.size(); i++) {
            cout << A[i] << " ";
        }
        cout << endl;
    }
};


// } Driver Code Ends
class Solution {
  public:
        int dp[1001][101];
    bool rec(int a,int target,int k,vector<int> &coins){
        if(target<0 || a>k ) return false;
        if(target==0 && a==k) return true;
        if(dp[target][a]!=-1){
            if(dp[target][a]==1) return true;
            return false;
        }
        for(int i=0;i<coins.size();i++){
            if(rec(a+1,target-coins[i],k,coins)) return true;
        }
        return dp[target][a]=false;
    }
    bool makeChanges(int N, int K, int target, vector<int> &coins) {
        memset(dp,-1,sizeof(dp));
        return rec(0,target,K,coins);
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    scanf("%d ", &t);
    while (t--) {

        int N;
        scanf("%d", &N);

        int K;
        scanf("%d", &K);

        int target;
        scanf("%d", &target);

        vector<int> coins(N);
        Array::input(coins, N);

        Solution obj;
        bool res = obj.makeChanges(N, K, target, coins);

        cout << res << endl;
    }
}

// } Driver Code Ends