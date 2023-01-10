//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
#define MAX 1000


// } Driver Code Ends
/*You are required to complete this method*/

class Solution{
  public:
   vector<int> nextsmaller(int *a, int n) {
     vector<int>ans(n,-1);
      stack<int>s;

      for(int i=n-1;i>=0;i--){
          while(!s.empty() && a[s.top()]>=a[i]){
              s.pop();
            }
            if(!s.empty())
            ans[i] = s.top();

          s.push(i);
       }
       return ans;
 }

    vector<int> prevsmaller(int* a, int n) {
     vector<int>ans(n,-1);
      stack<int>s;

      for(int i=0;i<n;i++){
          while(!s.empty() && a[s.top()]>=a[i]){
              s.pop();
            }
            if(!s.empty())
            ans[i] = s.top();

          s.push(i);
       }
       return ans;
    }    
  int largestAreaHistogram(int* a, int m) {
        //int n= heights.size();

       vector<int>next(m);
         next=nextsmaller(a,m);

        vector<int>prev(m);
        prev=prevsmaller(a,m);
         
         int area=INT_MIN;
        for(int i=0;i<m;i++){
            if(next[i]==-1)
            next[i] = m;

           int breadth=next[i]-prev[i]-1;
           int length=a[i]; 

           int newarea=length*breadth;
           area=max(area,newarea);
        }
        return area;
    
    }
  public:
   int maxArea(int M[MAX][MAX], int n, int m) {
      
        //compute the area for the firat row
        int area=largestAreaHistogram(M[0],m);
        //remaining 
        for(int i=1;i<n;i++){
            for(int j=0;j<m;j++){
                if(M[i][j]!=0)
                M[i][j]=M[i][j]+M[i-1][j];
                else
                M[i][j]=0;
            }
        
            area=max(area,largestAreaHistogram(M[i],m));
        }
        return area;

    }
};


//{ Driver Code Starts.
int main() {
    int T;
    cin >> T;

    int M[MAX][MAX];

    while (T--) {
        int n, m;
        cin >> n >> m;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> M[i][j];
            }
        }
        Solution obj;
        cout << obj.maxArea(M, n, m) << endl;
    }
}

// } Driver Code Ends