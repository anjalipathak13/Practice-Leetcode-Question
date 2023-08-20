//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	/* if x is present in arr[] then returns the count
		of occurrences of x, otherwise returns 0. */
	int firstocc(int arr[],int n,int x){
	    int l=0;
	    int h=n-1;
	    int ans=-1;
	    while(l<=h){
	        int mid = l+(h-l)/2;
	        if(arr[mid]>=x){
	            ans=mid;
	            h=mid-1;
	        }
	        else{
	            l=mid+1;
	        }
	    }
	    return ans;
	}
	int lastocc(int arr[],int n,int x){
	    int l=0;
	    int h=n-1;
	    int ans=-1;
	    while(l<=h){
	        int mid = l+(h-l)/2;
	        if(arr[mid]<=x){
	            ans=mid;
	            l=mid+1;
	        }
	        else{
	            h=mid-1;
	        }
	    }
	    return ans;
	}
	int count(int arr[], int n, int x) {
	    // code here
	    int i=firstocc(arr,n,x);
	    int j=lastocc(arr,n,x);
	    if(i==-1 || j==-1) return 0;
	    return (j-i+1);
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.count(arr, n, x);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends