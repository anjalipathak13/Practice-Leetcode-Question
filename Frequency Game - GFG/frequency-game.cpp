//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int LargButMinFreq(int arr[], int n) {
    map<int,int>m;
    for(int i=0;i<n;i++){
        m[arr[i]]++;
    }
    int maxi = INT_MIN;
    int mini = INT_MAX;
 
    for(auto i:m){
        if(i.second<mini){
            mini = i.second;  //minfreq
            maxi = i.first;   //element with min freq
        }
        else if(i.second==mini){    //when same freq element comes
            maxi = max(maxi,i.first);   //carry max ele
        }
    }
    
    return maxi;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    // Iterating over testcases
    while (t--) {
        int n;
        cin >> n;

        int arr[n];

        for (int i = 0; i < n; i++) cin >> arr[i];
        Solution ob;

        cout << ob.LargButMinFreq(arr, n) << endl;
    }
}
// } Driver Code Ends