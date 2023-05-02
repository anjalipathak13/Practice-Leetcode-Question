//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution{
    public:
    int maxSweetness(vector<int>& sweetness, int N, int K) {
         int left = 1, right = 1e9, ans = 0;

    // Binary search loop

    while (left <= right) {

     // Computing middle index of current search interval
        int mid =left+(right-left) / 2;

        // Iterating over sweetness array to count number of pieces
        int pieces = 0, currSweetness = 0;
        for (int i = 0; i < N; i++) {
            currSweetness += sweetness[i];
            if (currSweetness >= mid) {
                pieces++;
                currSweetness = 0;
            }
        }

        // Checking if current sweetness level is valid
        if (pieces >= K + 1) {
            ans = mid;
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    // Returning maximum sweetness
    return ans;
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> sweetness(n);
        for (int i = 0; i < n; i++) {
            cin >> sweetness[i];
        }
          Solution ob;
          int res=ob.maxSweetness(sweetness, n, k);
        cout << res << endl;
    }
}
// } Driver Code Ends