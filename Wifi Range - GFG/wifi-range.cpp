//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    bool wifiRange(int N, string S, int X){
        // code here
         vector<int>v(N + X + 1, 0);
        for(int i = 0; i < N; i++)
        {
            if(S[i] == '1')
            {
                int leftBound = i - X;
                int rightBound = i + X;
                leftBound = max(leftBound, 0);
                v[leftBound]++;
                v[rightBound + 1]--;
            }
        }
        int sum = 0;
        for(int i = 0; i < N; i++)
        {
            sum += v[i];
            if(sum <= 0)return false;
        }
        return true;
    }
};

//{ Driver Code Starts.

int main(){
    int T;
    cin >> T;
    while(T--){
        int N, X;
        string S;
        cin >> N >> X >> S;
        Solution obj;
        cout << obj.wifiRange(N, S, X) << "\n";
    }
}

// } Driver Code Ends