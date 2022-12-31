//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int minLaptops(int N, int start[], int end[]) {
        // Code here
          multiset<int> pq;
        vector<pair<int, int>> v;
        for(int i = 0; i < N; i++) {
            v.push_back({start[i], end[i]});
        }
        sort(v.begin(), v.end());
        int ans = 0;
        for(int i = 0; i < N; i++) {
            
            if(!pq.empty() && *pq.begin() <= v[i].first) {
                pq.erase(pq.begin());
            }
            else ans++;
            
            pq.insert(v[i].second);
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        int start[N], end[N];
        for(int i=0; i<N; i++)
            cin>>start[i];
        for(int i=0; i<N; i++)
            cin>>end[i];
            
        Solution ob;
        cout << ob.minLaptops(N, start, end) << endl;
    }
}
// } Driver Code Ends