//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends


class Solution{
  public:
    int countSubArrayProductLessThanK(const vector<int>& a, int n, long long k) {
        int start=0;
        int end=0;
        long long p = 1;
        int count=0;
        
        while( end < n ){
            p = p * a[end];
            while(start < n  &&  p >= k ){
                p = p/a[start];   //remove staring element till p<k (continuous subarray h)
                start++;
            }
            
            if( p < k ){
                count+=(end-start)+1; //with the addition of new element how many valid subarray are added more
            }
            
            end++;
                
        }
        
        return count;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        long long int k;
        cin >> n >> k;
        vector<int> arr(n);
        for (i = 0; i < n; i++) cin >> arr[i];
        Solution obj;
        cout << obj.countSubArrayProductLessThanK(arr, n, k) << endl;
    }
    return 0;
}

// } Driver Code Ends