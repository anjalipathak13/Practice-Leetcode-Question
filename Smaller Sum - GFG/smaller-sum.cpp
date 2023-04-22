//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++
class Solution{
public:
    vector<long long> smallerSum(int n,vector<int> &arr){
        // Code here
        long long sum=0;
        vector<long long>v;
        for(int i=0;i<n;i++){
            sum+=arr[i];
            v.push_back(arr[i]);
        }
        sort(arr.begin(),arr.end());
        unordered_map<long long,long long>m;
        for(int i=n-1;i>=0;i--){
            sum-=arr[i];
            m[arr[i]]=sum;
        }
        vector<long long>ans;
        for(int i=0;i<n;i++){
            ans.push_back(m[v[i]]);
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        Solution ob; 
        vector<long long> ans=ob.smallerSum(n,arr);
        for(int i=0;i<n;i++){
            if(i!=n-1){
                cout<<ans[i]<<" ";
            }
            else{
                cout<<ans[i]<<endl;
            }
        }
    }
    return 0;
}
// } Driver Code Ends