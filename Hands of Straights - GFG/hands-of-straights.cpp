//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    bool isStraightHand(int N, int groupSize, vector<int> &hand) {
        // code here
        if(N % groupSize != 0) return false; 
        if(N == 1 || groupSize == 1) return true;
        
        sort(hand.begin(),hand.end());
        vector<bool> vis(N, 0);
        
        int g = 0;
        int i = 0;
        
        while(i < N) {
            
            if(vis[i] == 1) {
                i++;
                continue;
            }
            
            vis[i] = 1;
            int cnt = 1;
            int prev = hand[i];
            int j;
            for(j = i+1; j < N; j++) {
                if(hand[j] == prev+1) {
                    cnt++;
                    prev = hand[j];
                    vis[j] = 1;
                }
                
                if(cnt == groupSize) {
                    g++;
                    break;
                }
            }
            
            i++;
        }

        if(g == N/groupSize)
            return true;
            
        return false;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, groupSize;
        cin >> N >> groupSize;

        vector<int> hand(N);
        for (int i = 0; i < N; i++) cin >> hand[i];

        Solution obj;
        int ans = obj.isStraightHand(N, groupSize, hand);
        if (ans)
            cout << "True" << endl;
        else
            cout << "False" << endl;
    }
    return 0;
}
// } Driver Code Ends