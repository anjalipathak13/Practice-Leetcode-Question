//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


class IntArray
{
public:
    template <class T>
    static void input(vector<T> &A,int n)
    {
        for (int i = 0; i < n; i++)
        {
            scanf("%d ",&A[i]);
        }
    }

    template <class T>
    static void print(vector<T> &A)
    {
        for (int i = 0; i < A.size(); i++)
        {
            cout << A[i] << " ";
        }
        cout << endl;
    }
};


// } Driver Code Ends
class Solution {

  public:
   long long f(int i,vector<int> &a,int prev,vector<vector<int>> &dp)
    {
        if(i<0)
        {
            return 0;
        }
        if(dp[i][prev]!=-1)
        {
            return dp[i][prev];
        }
        long long nottake=-1e9,take=-1e9;
        if(prev==1)
        {
            nottake=f(i-1,a,false,dp);
            take=a[i]+f(i-1,a,true,dp);
        }
        else
        {
            take=a[i]+f(i-1,a,true,dp);
        }
        return dp[i][prev]=max(take,nottake);
    }

  public:
    long long findMaxSubsetSum(int n, vector<int> &a) {
        // code here
        vector<vector<int>> dp(n,vector<int>(2,-1));
        return f(n-1,a,1,dp);
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        int N;
        scanf("%d",&N);
        
        
        vector<int> A(N);
        IntArray::input(A,N);
        
        Solution obj;
        long long res = obj.findMaxSubsetSum(N, A);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends