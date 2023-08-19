//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(vector<int>arr, int n, long long s)
    {
        int i=0,j=0;
        vector<int>ans;
        long long sum = 0;
        
        while(i<n && j<n){
            sum+=arr[j];
            if(sum==s){
                ans.push_back(i+1);
                ans.push_back(j+1);
                break;
            }
            else if(sum>s){
                while(sum>s && i<j){
                  sum-=arr[i];
                  i++;   
                }
            }
            
            if(sum==s)   return {i+1,j+1};
            j++;
        }
        
        if(ans.size()==0) ans.push_back(-1);
        
        return ans;
    }
};

//{ Driver Code Starts.

int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        long long s;
        cin>>n>>s;
        vector<int>arr(n);
        // int arr[n];
        const int mx = 1e9;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        vector<int>res;
        res = ob.subarraySum(arr, n, s);
        
        for(int i = 0;i<res.size();i++)
            cout<<res[i]<<" ";
        cout<<endl;
        
    }
	return 0;
}
// } Driver Code Ends