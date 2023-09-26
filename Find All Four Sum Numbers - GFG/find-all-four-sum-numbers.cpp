//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution{
    public:
    // arr[] : int input array of integers
    // k : the quadruple sum required
    vector<vector<int> > fourSum(vector<int> &arr, int k) {
        // Your code goes here
        int n = arr.size();
        sort(arr.begin(),arr.end());
        vector<vector<int>>ans;
        set<vector<int>>st;
        
        for(int i=0 ; i<n-3 ; i++){
            for(int j=i+1 ; j<n-2 ; j++){
                int l=j+1, h=n-1;
                int target = k-arr[i]-arr[j];
                while(l<h){
                    int sum=arr[l]+arr[h];
                    if(sum==target){
                        st.insert({arr[i],arr[j],arr[l],arr[h]});
                        l++;
                        h--;
                    }
                    else if(sum<target){
                        l++;
                    }
                    else{
                        h--;
                    }
                }
            }
        }
        
        for(auto it:st){
            ans.push_back(it);
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k, i;
        cin >> n >> k;
        vector<int> a(n);
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        vector<vector<int> > ans = ob.fourSum(a, k);
        for (auto &v : ans) {
            for (int &u : v) {
                cout << u << " ";
            }
            cout << "$";
        }
        if (ans.empty()) {
            cout << -1;
        }
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends