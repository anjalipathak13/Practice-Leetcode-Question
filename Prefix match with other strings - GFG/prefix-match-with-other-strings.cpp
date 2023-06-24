//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++

class Solution{   
public:
    int klengthpref(string arr[], int n, int k, string str){    
        
        int c = 0,i = 0;
        string s;
        
        for( i=0;i<str.length();i++){
            if(i<k)
            s+=str[i];
            else break;
        }
        if(i!=k) return 0;
        
        for(int i=0;i<n;i++){
            string temp=arr[i];
            int j=0;
            string t="";
            while(j<temp.length() && j<k){
                t+=temp[j];
                j++;
            }
            if(t==s)  c++;
        }
        
        return c;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string arr[n];
        for(int i=0;i<n;i++)
        {
            string s;
            cin>>arr[i];
            
        }
        int k;
        cin>>k;
        string str;
        cin>>str;
        
        Solution ob;
        cout << ob.klengthpref(arr, n, k, str) << endl;
    }
    return 0; 
} 

// } Driver Code Ends