//{ Driver Code Starts

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
public:
    int Count(vector<vector<int> >& matrix) {
      int ans=0;
      int n=matrix.size();
      int m= matrix[0].size();
      int delrow[8]={-1,-1,-1,0,+1,+1,+1,0};
      int delcol[8]={-1,0,+1,+1,+1,0,-1,-1};
          
      
      for(int i=0;i<n;i++){
          for(int j=0;j<m;j++){
              int cnt=0;
              if(matrix[i][j]==1){
                  int row=i;
                  int col=j;
                  for(int i=0;i<8;i++){
                      int nrow=row+delrow[i];
                      int ncol=col+delcol[i];
                      if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && matrix[nrow][ncol]==0)
                        cnt++;
                  }
                  if(cnt!=0 && cnt%2==0) ans++;
              }
          }
       }
      return ans;
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>> matrix(n, vector<int>(m,0));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> matrix[i][j];
			}
		}
		Solution ob;
		int ans = ob.Count(matrix);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends