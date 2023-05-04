//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int maxCoins(int n,vector<vector<int>> &ranges){
        // Code here
        sort(ranges.begin(),ranges.end());
        vector<vector<int>> newr;
        for(auto &it:ranges) newr.push_back({it[1],it[0],it[2]});
        sort(newr.begin(),newr.end());
        int maxi = 0;
        int ans = 0;
        int maxi2=0;
        int i = n-1 , j = n-1;
        while(i>=0)
        {
            int maxi3 = maxi;
            while(j>=0&&ranges[j][0]>=newr[i][0])
            {
                if(ranges[j][0]==newr[i][1]&&ranges[j][1]==newr[i][0])
                {
                    maxi3 = max(maxi3,ranges[j][2]);
                    j--;
                    continue;
                }
                maxi = max(maxi,ranges[j][2]);
                maxi3 = max(maxi3,ranges[j][2]);
                j--;
            }
            if(maxi!=0) ans = max(ans,newr[i][2]+maxi);
            maxi = maxi3;
            maxi2 = max(maxi2,newr[i][2]);
            i--;
        }
        if(ans<maxi2) ans = maxi2;
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<vector<int>> a(n,vector<int>(3));
        for(int i=0;i<n;i++){
            cin>>a[i][0]>>a[i][1]>>a[i][2];
        }
        Solution ob;
        cout<<ob.maxCoins(n,a)<<endl;
    }
    return 0;
}
// } Driver Code Ends