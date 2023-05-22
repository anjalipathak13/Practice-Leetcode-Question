//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
    public:
    int solve(int N, vector<int> p){
       if(N == 1) return 0;
        if(N == 2) return 0;
        int zerooccurence = 0;
        vector<int> visited(N,0);
        int noofparents = 0;
        for(int i=1; i<N; i++)
        {
            if(p[i]==0) zerooccurence++;
            if(!visited[p[i]])
            {
                visited[p[i]]=1;
                noofparents++;
            }
        }
        int leafnodes = N-noofparents;
        
        if(zerooccurence>1)
        return N-1-leafnodes;
        
        else
        return N-1-leafnodes-1;
    }
};


//{ Driver Code Starts.

int main(){
    int T;
    cin >> T;
    while(T--){
        int N;
        cin >> N;
        vector<int> p(N);
        for(int i = 0; i < N; i++){
            cin >> p[i];
        }

        Solution obj;
        cout << obj.solve(N, p) << "\n";
    }
}   
// } Driver Code Ends