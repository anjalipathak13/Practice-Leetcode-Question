//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int kthElement(int arr1[], int arr2[], int n, int m, int k)
    {
        int i=0;
        int j=0;
        int c=0;
        while(i<n && j<m){
            if(arr1[i]<arr2[j]){
                c++;
                if(c==k){
                return arr1[i];
                }
                i++;
            }
            else if(arr1[i]>arr2[j]){
                c++;
                if(c==k){
                return arr2[j];
                }
                j++;
           }
           else{
                c++;
                if(c==k){
                return arr2[j];
                }
                c++;
                if(c==k){
                return arr2[j];
                }
                i++;
                j++;
           }
        }   
        
        while(i<n){
            c++;
            if(c==k){
                return arr1[i];
            }
            i++;
        }
            
        while(j<m){
            c++;
            if(c==k){
                return arr2[j];
            }
            j++;
        }
    }
   
};

//{ Driver Code Starts.
 
// Driver code
int main()
{
	int t;
	cin>>t;
	while(t--){
		int n,m,k;
		cin>>n>>m>>k;
		int arr1[n],arr2[m];
		for(int i=0;i<n;i++)
			cin>>arr1[i];
		for(int i=0;i<m;i++)
			cin>>arr2[i];
		
		Solution ob;
        cout << ob.kthElement(arr1, arr2, n, m, k)<<endl;
	}
    return 0;
}
// } Driver Code Ends