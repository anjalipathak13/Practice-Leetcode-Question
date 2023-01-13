//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class fenwick {
public:
    vector<long long> v;
    int size;
    fenwick(int s) {
        size = s;
        v.resize(size, 0);
    }
    void add(int idx, long long delta) {
        while(idx < size) {
            v[idx] += delta;
            idx += idx & (-idx);
        }
    }
    long long sum(int idx) {
        long long res = 0;
        while(idx > 0) {
            res += v[idx];
            idx -= idx & (-idx);
        }
        return res;
    }
};

class Solution{
public:
  
  vector<int> maximumToys(int N,vector<int> A,int Q,vector<vector<int>> Queries){
      // code here
      vector<int> fr(1e6 + 5, 0);
      for(auto i:A){
          fr[i]++;
      }
      
      fenwick f1(1e6 + 5);
      fenwick f2(1e6 + 5);

      for(int i = 0; i < N; i++) {
          f1.add(A[i], A[i]);
          f2.add(A[i], 1);
      }
      
      vector<int> res;

      for(int i = 0; i < Q; i++) {
          int& C = Queries[i][0];
          
          for(int j = 2; j < Queries[i].size(); j++) {
              int idx = Queries[i][j];
              f1.add(A[idx - 1], -A[idx - 1]);
              f2.add(A[idx - 1], -1);
          }
          
          //corner cases getting stuck
          int ptr1 = 0, ptr2 = 1e6 + 5, ans = 0;
          while(ptr1 < ptr2) {
              int mid = ptr1 + (ptr2 - ptr1) / 2;
              if(f1.sum(mid) <= C) {
                  ans = mid;
                  ptr1 = mid + 1;
              } else {
                  ptr2 = mid;
              }
          }

          long long ct = f2.sum(ans);
          ct += min((C - f1.sum(ans)) / (ans + 1), (long long)fr[ans + 1]);

          res.push_back(ct);
          
          for(int j = 2; j < Queries[i].size(); j++) {
              int idx = Queries[i][j];
              f1.add(A[idx - 1], A[idx - 1]);
              f2.add(A[idx - 1], 1);
          }
      }
      return res;
  }
};

//{ Driver Code Starts.
int main() {
 int t=1;
 cin>>t;
 for(int i=1;i<=t;i++){
    int N;
    cin>>N;
    vector<int>A(N);
    for(auto &i:A){
      cin>>i;
    }
    int Q;
    cin>>Q;
    vector<vector<int>> Queries(Q);
    for(int i=0;i<Q;i++){
      int x,y;
      cin>>x>>y;
      Queries[i].push_back(x);
      Queries[i].push_back(y);
      for(int j=0;j<Queries[i][1];j++){
        cin>>x;
        Queries[i].push_back(x);
      }
    }
    Solution obj;
    auto ans =obj.maximumToys(N,A,Q,Queries);
    for(auto i:ans)
      cout<<i<<" ";
    cout<<endl;
 }
}
// } Driver Code Ends