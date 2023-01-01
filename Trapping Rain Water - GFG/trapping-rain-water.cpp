//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution{

    // Function to find the trapped water between the blocks.
    public:
    long long trappingWater(int arr[], int n){
        // code here
        vector<int>leftmax(n);
        vector<int>rightmax(n);
        
        int maxi=0;
        for(int i=0;i<n;i++){
            maxi=max(maxi,arr[i]);
            leftmax[i]=maxi;
        }
        
        maxi=0;
        for(int i=n-1;i>=0;i--){
            maxi=max(maxi,arr[i]);
            rightmax[i]=maxi;
        }
        
        long long watertrapped=0;
        for(int i=0;i<n;i++){
           watertrapped+=min(leftmax[i],rightmax[i])-arr[i]; 
        }
        return watertrapped;
    }
};

//{ Driver Code Starts.

int main(){
    
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        
        int a[n];
        
        //adding elements to the array
        for(int i =0;i<n;i++){
            cin >> a[i];            
        }
        Solution obj;
        //calling trappingWater() function
        cout << obj.trappingWater(a, n) << endl;
        
    }
    
    return 0;
}
// } Driver Code Ends