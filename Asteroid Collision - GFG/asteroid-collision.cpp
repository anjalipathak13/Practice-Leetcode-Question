//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> asteroidCollision(int N, vector<int> &asteroids) {
        // code here
        stack<int> st;
        for(int i = 0; i < N; i++){
            while(st.size() > 0){
                int idx = st.top();
                if(asteroids[i] < 0){
                    //left movement;
                    if(asteroids[idx] > 0){
                        //right movement
                        if(-asteroids[i] < asteroids[idx]){
                            asteroids[i] = 0;
                            break;
                        }
                        else if(-asteroids[i] == asteroids[idx]){
                            asteroids[i] = 0;
                            asteroids[idx] = 0;
                            st.pop();
                            break;
                        }
                        else{
                            asteroids[idx] = 0;
                            st.pop();
                        }
                    }
                    else{
                        break;
                    }
                }
                else if(asteroids[i] == 0){
                    break;
                }
                else{
                    break;
                }
            }
            if(asteroids[i] != 0){
                st.push(i);
            }
        }
        vector<int> ans(st.size());
        int idx = ans.size() - 1;
        while(st.size() > 0){
            ans[idx] = asteroids[st.top()];
            st.pop();
            idx--;
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

        vector<int> asteroids(N);
        for (int i = 0; i < N; i++) cin >> asteroids[i];

        Solution obj;
        vector<int> ans = obj.asteroidCollision(N, asteroids);
        for (auto &it : ans) cout << it << ' ';
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends