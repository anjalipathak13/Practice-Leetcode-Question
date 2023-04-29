//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    long long findNumber(long long N){
        // Code here
        char a[5]={'1','3','5','7','9'};
		string s="";
		long long pre=1,mul=5,times=2;
		while(N>0){
			long long temp=(N % mul)-1;
			long long ind=(temp+mul)%mul;
			int index=ind/pre;
			s=a[index]+s;
			N-=mul;
			mul*=5;
			pre*=5;
		}
		return stoll(s);
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        long long N;
        cin>>N;
        Solution ob;
        cout<<ob.findNumber(N)<<endl;
    }
    return 0;
}
// } Driver Code Ends