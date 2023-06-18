//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int distributeTicket(int N, int K) {
        // code here
        deque<int>dq;
        for(int i=1;i<=N;i++){
            dq.push_back(i);
        }
        
        int ans=0,i=0;
        bool f=0;
        while(!dq.empty()){
            if(f==0){
                while(!dq.empty() && i<K){
                    ans = dq.front();
                    dq.pop_front();
                    i++;
                }
            }else{
                while(!dq.empty() && i<K){
                    ans = dq.back();
                    dq.pop_back();
                    i++;
                }
            }
            
            f = !f;
            i=0;
        }
        
        return ans;
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        int N;
        scanf("%d",&N);
        
        
        int K;
        scanf("%d",&K);
        
        Solution obj;
        int res = obj.distributeTicket(N, K);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends