//{ Driver Code Starts
//Initial function template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
public:
    //Function to count subarrays with sum equal to 0.
    long long int findSubarray(vector<long long int> &arr, int n ) {
        
        long long int  sum=0;
        long long int  c=0;
        unordered_map<long long int ,long long int>m;
        m[0]++;
        for(int i=0;i<arr.size();i++){
            sum=sum+arr[i];
            
            if(m[sum] ||sum==0||arr[i]==0){
               c+=m[sum];
            }
            
            m[sum]++;
        }
        return c;
    }
};

//{ Driver Code Starts.
int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n; //input size of array
       
        vector<long long int> arr(n,0);
        
        for(int i=0;i<n;i++)
            cin>>arr[i]; //input array elements
        Solution ob;
        cout << ob.findSubarray(arr,n) << "\n";
    }
	return 0;
}
// } Driver Code Ends