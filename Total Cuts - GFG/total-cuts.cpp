//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int totalCuts(int N,int K,vector<int> &A){
        // Code here
         int left[N]={0},right[N]={0};
        left[0]=A[0];
        int ans=left[0];
        for(int i=1;i<N;i++){
            ans=max(ans,A[i]);
            left[i]=ans;
        }
        right[N-1]=A[N-1];
        ans=right[N-1];
        for(int i=N-2;i>=0;i--){
            ans=min(ans,A[i]);
            right[i]=ans;
        }
        int cnt=0;
        for(int i=1;i<N;i++){
            if(left[i-1]+right[i]>=K)cnt++;
        }
        return cnt;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N,K;
        cin>>N>>K;
        vector<int> A(N);
        for(int i=0;i<N;i++){
            cin>>A[i];
        }
        Solution ob;
        cout<<ob.totalCuts(N,K,A)<<endl;
    }
    return 0;
}
// } Driver Code Ends