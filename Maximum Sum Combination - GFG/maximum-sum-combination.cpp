//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> maxCombinations(int n, int K, vector<int> &A, vector<int> &B) {
        sort(A.begin(),A.end());
        sort(B.begin(),B.end());
        
        vector<int>ans;
        priority_queue<pair<int,pair<int,int>>>pq;  //maxheap
        for(int i=0 ; i<n ; i++){
            pq.push({A[i]+B[n-1],{i,n-1}});   //sum,{r,c}
        }
        
        while(!pq.empty() && K--){
            pair<int,pair<int,int>>temp = pq.top();
            pq.pop();
            int data = temp.first;
            int x = temp.second.first;
            int y = temp.second.second;
            
            ans.push_back(data);
            
            if(y!=0){
                pq.push({A[x]+B[y-1],{x,y-1}});
            }
            
        }
        return ans;
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, K;
        cin >> N >> K;

        vector<int> A(N), B(N);
        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }
        for (int i = 0; i < N; i++) {
            cin >> B[i];
        }
        Solution obj;
        vector<int> ans = obj.maxCombinations(N, K, A, B);
        for (auto &it : ans) cout << it << ' ';
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends