//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function teamplate for C++

class Solution{
  public:
    vector<int> printClosest(int arr[], int brr[], int n, int m, int x) {
        //code here
        int diff = INT_MAX;
        int res_l, res_r;
    
        int l = 0, r = m-1;
        while (l < n && r >= 0) {
            if (abs(arr[l] + brr[r] - x) < diff) {
                res_l = l;
                res_r = r;
                diff = abs(arr[l] + brr[r] - x);
            }
    
            if (arr[l] + brr[r] > x) {
                r--;
            } else {
                l++;
            }
        }
    
        return {arr[res_l], brr[res_r]};
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	int m,n,x;
	while(t--)
    {
        cin>>n>>m;
        int a[n],b[m];
        
        for(int i=0;i<n;i++)
            cin>>a[i];
            
        for(int i=0;i<m;i++)
            cin>>b[i];
            
        cin>>x;
        
        vector<int> ans;
        Solution ob;
        ans = ob.printClosest(a, b, n, m, x);
        cout << abs(ans[0] + ans[1] - x) << endl;
        
    }
    return 0;
}

// } Driver Code Ends