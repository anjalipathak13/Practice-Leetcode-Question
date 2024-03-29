//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends

class Solution
{   
    public:
    //Function to return list of integers that form the boundary 
    //traversal of the matrix in a clockwise manner.
    vector<int> boundaryTraversal(vector<vector<int> > matrix, int n, int m) 
    {
        // code here
        vector<int>ans;
        int t=0,b=n-1;
        int l=0,r=m-1;
        
        for(int i=l;i<=r;i++){
            ans.push_back(matrix[t][i]);
        }
         t++;
        if(ans.size()==m*n) return ans;
        
        for(int i=t;i<=b;i++){
            ans.push_back(matrix[i][r]);
        }
        r--;
        if(ans.size()==m*n) return ans;
        
        for(int i=r;i>=l;i--){
            ans.push_back(matrix[b][i]);
        }
        b--;
        if(ans.size()==m*n) return ans;
        
        for(int i=b;i>=t;i--){
            ans.push_back(matrix[i][l]);
        }
        l++;
        return ans;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--) 
    {
        int n,m;
        cin>>n>>m;
        vector<vector<int> > matrix(n); 

        for(int i=0; i<n; i++)
        {
            matrix[i].assign(m, 0);
            for( int j=0; j<m; j++)
            {
                cin>>matrix[i][j];
            }
        }

        Solution ob;
        vector<int> result = ob.boundaryTraversal(matrix, n, m);
        for (int i = 0; i < result.size(); ++i)
                cout<<result[i]<<" ";
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends