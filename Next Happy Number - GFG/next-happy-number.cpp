//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public:
    bool isHappy(int N){
        if(N==1 || N==7)  return true; //if n is 1 or 7 then only it will lead to 1 in future 
        
        int num = N;
        while(num>9){    //till it become a single digit number 
            int sum = 0;
            while(num!=0){
                int r=num%10;
                sum += r*r;
                num=num/10;
            }
            num = sum;
        }
        
        if(num==1 || num==7)  return true;
        return false;
    }
    int nextHappy(int N){
        // code here
        while(N++){
            if(isHappy(N))  return N;   
        }
        
        return 0;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.nextHappy(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends