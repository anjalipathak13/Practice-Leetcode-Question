//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    string stringMirror(string str){
        // Code here
         int n = str.size();
        int ind = 0;
        for(int i = 1; i<n; i++){
            if(str[0]==str[1])  break;
            if(str[i]<=str[i-1]){
                ind = i;
            }
            else break; 
        }
        string t = str.substr(0,ind+1);
        string p = t;
        reverse(p.begin(),p.end());
        return t+p; 
        
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        Solution ob;
        string res=ob.stringMirror(str);
        cout<<res<<endl;
    }
}
// } Driver Code Ends