//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:	
		
	int isDivisible(string s){
	    //complete the function here
	    long long int len = s.length();
	    long long int sum=0,powerof2=1;
	    for(long long int i=0;i<len;i++){
	       long long int number = s[len-i-1] - '0'; 
	       sum+= ((number * powerof2)%3);
	       powerof2 = (powerof2 * 2)%3;
	    }
	    if(sum%3 == 0){
	        return 1;
	    }else{
	        return 0;
	    }
	}

};

//{ Driver Code Starts.
int main(){
    
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        Solution ob;
        cout << ob.isDivisible(s) << endl;
    }
return 0;
}


// } Driver Code Ends