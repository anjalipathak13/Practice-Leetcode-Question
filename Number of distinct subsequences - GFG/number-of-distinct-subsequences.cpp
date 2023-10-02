//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
  public:	
	int distinctSubsequences(string s)
	{
	    // Your code goes here
	      // Your code goes here
	    int n = s.size();
        int mod = 1e9 + 7;

        vector<long> dp(n + 1, 0);
        dp[0] = 1;
        unordered_map<char, int> mp;

        for (int i = 1; i < dp.size(); i++) {
            char ch = s[i - 1];

            dp[i] = (2 * dp[i - 1]) % mod;

            if (mp.find(ch) != mp.end()) {
                int j = mp[ch];

                dp[i] = (dp[i] - dp[j - 1]) % mod; 
            }

            mp[ch] = i;
        }

        if (dp[n] <= 0) {
            dp[n] += mod;
        }

        return dp[n];
	}
};

//{ Driver Code Starts.

int main() 
{
   	

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string s;
   		cin >> s;

        Solution ob;
   		cout << ob.distinctSubsequences(s) << "\n";
   	}

    return 0;
}
// } Driver Code Ends