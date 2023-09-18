//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    // Function to check if given number n is a power of two.
    bool isPowerofTwo(long long n){
        
        // Your code here  
        
        if(n==0){
            return false;
        }
    
        //We use a counter variable to count number of set bits.
        int count = 0;
        while(n>0)
        {
            //Increment of counter variable if we get 1 as the rightmost bit.
            count+=(n&1);
            //Right Shift n to remove the rightmost bit.
            n>>=1;
        }
        //returning true if number of set bits is 1 otherwise false.
        return count==1;
        
    }
};

//{ Driver Code Starts.

// Driver code
int main()
{

    int t;
    cin>>t;//testcases

    for(int i=0;i<t;i++)
    {
        long long n; //input a number n
        cin>>n;

        Solution ob;
         if(ob.isPowerofTwo(n))//Now, if log2 produces an integer not decimal then we are sure raising 2 to this value
             cout<<"YES"<<endl;
         else
            cout<<"NO"<<endl;

    }

    return 0;
}

// } Driver Code Ends