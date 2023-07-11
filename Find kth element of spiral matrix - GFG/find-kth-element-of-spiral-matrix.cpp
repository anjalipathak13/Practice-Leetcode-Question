//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
#define MAX 1000

// } Driver Code Ends
class Solution
{
    public:
    /*You are required to complete this method*/
    int findK(int a[MAX][MAX],int n,int m,int k)
    {
       int t = 0,b = n-1,l = 0,r = m-1;
       int dir = 1;
       
       while(t<=b && l<=r){
           if(dir==1){
               for(int i=l;i<=r;i++){
                   k--;
                    if(k==0) return a[t][i];
               }
               t++;
               dir++;
           }
            if(dir==2){
                for(int i=t;i<=b;i++){
                     k--;
                     if(k==0)  return a[i][r];
                }
                r--;
                dir++;
            }
            
            if(dir==3){
                for(int i=r;i>=l;i--){
                    k--;
                    if(k==0)  return a[b][i];
                }
                b--;
                dir++;
            }
            
            if(dir==4){
                for(int i=b;i>=t;i--){
                    k--;
                    if(k==0)  return a[i][l];
                }
                l++;
                dir++;
            }
            
            dir=dir%4;  
       }
       
       return 0;
    }
};





//{ Driver Code Starts.
int main()
{
    int T;
    cin>>T;
  
    while(T--)
    {
        int n,m;
        int k=0;
        //cin>>k;
        cin>>n>>m>>k;
        int a[MAX][MAX];
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>a[i][j];
            }
        }
        Solution ob;
        cout<<ob.findK(a,n,m,k)<<endl;
        
       
    }
}
// } Driver Code Ends