//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    bool is_possible_to_get_seats(int n, int m, vector<int>& seats){
        // Write your code here.
        if(m==1&&n==1) return !seats[0];
        if(n==0) return true;
        if(n>(m+1)/2) return false;
        int cnt=n;
        for(int i=0;i<m;i++){
            if(i==0&&!seats[i]&&!seats[i+1]) cnt--,seats[i]=1;
            else if(i==m-1&&!seats[i]&&!seats[i-1]) cnt--,seats[i]=1;
            else if(!seats[i]&&!seats[i-1]&&!seats[i+1]) cnt--,seats[i]=1;
            if(cnt==0) return true;
        }
        return false;
    }
};

//{ Driver Code Starts.

int main(){

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int m;
        cin >> m;
        vector<int> seats(m);
        for (int i = 0; i < m; i++) {
            cin >> seats[i];
        }
        Solution obj;
        if (obj.is_possible_to_get_seats(n, m, seats)) {
            cout << "Yes" << endl;
        }
        else {
            cout << "No" << endl;
        }
    }
}

// } Driver Code Ends