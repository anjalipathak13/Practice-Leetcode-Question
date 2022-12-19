//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
     int dijkstra(int v, vector<vector<int>> adj[], int s){
        vector <int> ans(v, INT_MAX);
        ans[s]=0;
        
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>> > pq;
        pq.push({0,s});
        
        while(!pq.empty())
        {
            int len = pq.top().first;
            int parent = pq.top().second;
            pq.pop();
            
            for (auto it:adj[parent]){
                int child = it[0];
                int weight = it[1];
                
                if (ans[child]>len+weight)
                {
                    ans[child]=len+weight;
                    pq.push({len+weight, child});
                }
            }
        }
        
        for(int i=0;i<v;i++)
            if(ans[i]==INT_MAX)
            	return -1;
        
        return *max_element(ans.begin(),ans.end());
    }
    int minimumCost(vector<vector<int>>& flight,int N, int K){
        vector<vector<int>> adj[N];
        for(auto i:flight){
            adj[i[0]-1].push_back({i[1]-1,i[2]});
        }
        return dijkstra(N,adj,K-1);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int size;
        cin >> size;
        vector<vector<int>> flights(size,vector<int>(3));
        for (int i = 0; i < size; i++) {
            vector<int> temp;
            for (int j = 0; j < 3; ++j) {
                int x;
                cin >> x;
                temp.push_back(x);
            }
            flights[i]=temp;
        }

        Solution ob;
        cout << ob.minimumCost(flights, n, k) << "\n";
    }
}

// } Driver Code Ends