//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
  public:
    string secFrequent (string arr[], int n)
    {   
       unordered_map< string ,int>m;
        for(int i=0;i<n;i++){
            m[arr[i]]++;
        }
        int max=INT_MIN;
        int secmax=INT_MIN;
        string ans;
        for(auto i:m){
            if(max<i.second){
                max=i.second;
            }
        }
        
        for(auto i:m) { 
             if(i.second>secmax && i.second<max){
                secmax=i.second;
                ans=i.first;
            }
        }
        return ans;
        
    }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string arr[n];
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        Solution ob;
        cout << ob.secFrequent (arr, n) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends