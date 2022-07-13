// { Driver Code Starts
// driver code

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++

class Solution
{
  public:
  bool paint(long long mid,int arr[],int n,int k)
  {
      int c=1;
      long long sum=0;
      for(int i=0;i<n;i++)
      {
          if(sum+arr[i]>mid)
          {
              sum=arr[i];
              c++;
          }
          else{
              sum+=arr[i];
          }
      }
      if(c>k)return false;
      return true;
      
  }
    long long minTime(int arr[], int n, int k)
    {
        // code here
        // return minimum time
        long long res=INT_MAX;
        long  low=0;
        long long high=0;
        for(int i=0;i<n;i++){
        high+=arr[i];
        low= max(low,(long)arr[i]);
        }
        while(low<=high)
        {
            long long mid=low+(high-low)/2;
            if(paint(mid,arr,n,k)){
            high=mid-1;
            res=mid;
            }
            else
            low=mid+1;
            
        }
        return res;
    }
};

// { Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int k,n;
		cin>>k>>n;
		
		int arr[n];
		for(int i=0;i<n;i++)
		    cin>>arr[i];
		Solution obj;
		cout << obj.minTime(arr, n, k) << endl;
	}
	return 0;
}  // } Driver Code Ends