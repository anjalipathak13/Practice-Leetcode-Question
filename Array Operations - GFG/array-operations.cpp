//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int arrayOperations(int n, vector<int> &arr) {
        
         int cnt=0,s=0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]==0){
                if(s!=0){
                    cnt++;    
                }
                s=0;
            }else{
                s++;
            }
        }
        if(s>0){
            cnt++;
        }
        return cnt;
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        
        int n;
        cin>>n;
        
        
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        
        Solution obj;
        int res = obj.arrayOperations(n, arr);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends