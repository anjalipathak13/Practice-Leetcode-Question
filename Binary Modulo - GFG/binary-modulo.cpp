//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
        int modulo(string s,int m)
        {
            //code here
             long long ans = 0; 
            long long weight = 1; 
            int n = s.length(); 
            for(int i=n-1;i>=0;i--){
                int bit = s[i] - '0'; 
                if(bit==1)
                    ans= (ans + weight)%m;
                
                weight*= 2 ;
                weight%= m; 
            } 
            
            int r = ans % m;
            return r; 
        }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        int m;
        cin>>s>>m;
        Solution a;
        cout<<a.modulo(s,m)<<endl;
    }
    return 0;
}
// } Driver Code Ends