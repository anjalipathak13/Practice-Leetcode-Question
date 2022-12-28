//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
public:
  bool isprime(int n){
      if(n==1 || n==0)
      return false;
      
      for(int i=2;i<=sqrt(n);i++){
          if(n%i==0)
          return false;
      }
      return true;
  }
    
  string isSumOfTwo(int N){
     int first=1;
     int second=N-1;
     string st="  ";
     
     while(true){
     if(isprime(first) &&  isprime(second)){
         st="Yes";
         break;
        }
     if(first>=second){
        st="No";
        break;
        }
        
         first++;
         second--;
    }
    
     return st;
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
        cout << ob.isSumOfTwo(N) << endl;
    }
    return 0;
}

// } Driver Code Ends