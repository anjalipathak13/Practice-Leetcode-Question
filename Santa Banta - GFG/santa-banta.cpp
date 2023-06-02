//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution{
public:
   vector<int> prime;
int N=2e6+5;
    void precompute(){
        vector<int> arr(N,1);
        arr[0]=0;
        arr[1]=0;
        for(int i=2;i<N;i++){
            if(arr[i]){
                prime.push_back(i);
                for(int j=2*i;j<=N;j+=i){
                    arr[j]=0;
                }
            }
        }
    }
    
    void dfs(int i,vector<vector<int>> &adj,vector<int> &visited,int &x){
        x++;
        visited[i]=1;
        for(auto it:adj[i]){
            if(!visited[it]){
                dfs(it,adj,visited,x);
            }
        }
    }
    int helpSanta(int n, int m, vector<vector<int>> &g){
        // Code here
        if(m==0){
            return -1;
        }
       
        vector<int> visited(n+1,0);
        int count=INT_MIN;
        
        for(int i=1;i<=n;i++){
            if(!visited[i]){
                int x=0;
                dfs(i,g,visited,x);
                count=max(count,x);
            }
        }
        if(count==1){
            return -1;
        }
         return prime[count-1];
    }
};

//{ Driver Code Starts.

int main(){
	int t;cin>>t;
	Solution ob;
	ob.precompute();
	while(t--){
        int n,e,u,v;
        cin>>n>>e;
        vector<vector<int>> g(n+10);
        
		for(int i = 0; i < e; i++)
		{
			cin>>u>>v;
			g[u].push_back(v);
			g[v].push_back(u);
		}
		cout << ob.helpSanta(n, e, g) << endl;
		
	}
}



// } Driver Code Ends