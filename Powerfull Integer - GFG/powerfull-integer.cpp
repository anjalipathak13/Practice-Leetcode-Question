//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int powerfullInteger(int n,vector<vector<int>> &intervals,int k){
        // Code here
          map<int,int> mpp;
        for(auto x:intervals){
            mpp[x[0]]+=1;
            mpp[x[1]+1]-=1;
        }
        int ans=-1,temp=0;
        for(auto x:mpp){
            if(mpp[x.first]>=0){
                temp+=mpp[x.first];
                if(temp>=k) ans=x.first;
            }
            else{
                if(temp>=k) ans=x.first-1;
                temp+=mpp[x.first];
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n;
        vector<vector<int>> intervals(n,vector<int>(2));
        for(int i=0;i<n;i++){
            cin>>intervals[i][0]>>intervals[i][1];
        }
        cin>>k;
        Solution ob;
        cout<<ob.powerfullInteger(n,intervals,k)<<endl;
    }
    return 0;
}
// } Driver Code Ends