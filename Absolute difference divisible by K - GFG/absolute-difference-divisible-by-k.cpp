//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    long long countPairs(int n, int arr[], int k) {
        // code here
         long long  res = 0;

        map< long long , long long >mp;

        for(int i=0;i<n;i++){

            mp[arr[i]%k]+=1;

        }

        for(auto it: mp){

             long long  val = it.second;

            res+=(val*( long long )(val-1)/2);

        }

        

        return res;

    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,k;
        cin>>n;
        
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        
        cin>>k;

        Solution ob;
        cout << ob.countPairs(n,arr,k) << endl;
    }
    return 0;
}
// } Driver Code Ends