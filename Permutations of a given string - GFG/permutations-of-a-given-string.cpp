//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
	    void solve(int index,string s, unordered_set<string>&st){
	        if(index>=s.length()){
	            st.insert(s);
	            return;
	        }
	        
	        for(int i=index;i<s.length();i++){
	            swap(s[index],s[i]);
	            solve(index+1,s,st);
	            swap(s[index],s[i]);
	        }
	    }
		vector<string>find_permutation(string S)
		{
		    // Code here there
		    vector<string>ans;
		    unordered_set<string>st;
		    solve(0,S,st);
		    
		    for(auto i:st){
		        ans.push_back(i);
		    }
		    sort(ans.begin(),ans.end());
		    return ans;
		}
};



//{ Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--)
    {
	    string S;
	    cin >> S;
	    Solution ob;
	    vector<string> ans = ob.find_permutation(S);
	    for(auto i: ans)
	    {
	    	cout<<i<<" ";
	    }
	    cout<<"\n";
    }
	return 0;
}

// } Driver Code Ends