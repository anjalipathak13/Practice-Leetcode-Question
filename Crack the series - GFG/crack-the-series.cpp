//{ Driver Code Starts
//Initial Template for C++

// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

// User function Template for C++
class Solution {
  public:
    long double NthTerm(int N){
        // code here
       long double s=2;
       long  double d=2;
        for(int i=1;i<N;i++){
            if(i%2==1){
              s=s*s; 
            }
            else{
               d=d*d*d; 
            }
        }
        
        if(N%2==0)
        return d;
        else
        return s;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        cout<< fixed << setprecision(0)<<ob.NthTerm(N)<<endl;
    }
    return 0;
}

// } Driver Code Ends