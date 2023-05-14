//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
const int MAX_CHAR = 26;

// } Driver Code Ends
class Solution
{
    public:
    string rearrangeString(string str)
    {
         int n=str.length();
        unordered_map<char,int>m;
        
        for(int i=0;i<n;i++){
            m[str[i]]++;
        }
        
        priority_queue<pair<int,char>>pq;
       
        for(int i='a';i<='z';i++){
            if(m[i]>0){
                 pq.push({m[i],i});
            }
            
            if(m[i]>(n+1)/2)return "-1";
        }
       string ans="";
        
        while(pq.size()>=2){
            auto p1=pq.top();
            pq.pop();
            
            auto p2=pq.top();
            pq.pop();
            
            ans+=p1.second;
            ans+=p2.second;
            
            p1.first--;
            p2.first--;
            
            if(p1.first>0)pq.push({p1.first,p1.second});
            if(p2.first>0)pq.push({p2.first,p2.second});
           
        }
        
        //if(ans.length()!=n)return "-1";
        
        while(!pq.empty()){
            ans+=pq.top().second;
            pq.pop();
        }
        
       
        return ans;
        
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    string str;
	    cin>>str;
	    Solution ob;
	    string str1=ob.rearrangeString(str);
	    int flag=1;
	    int c[26] = {0};
	    for(int i=0; i<str.length(); i++)
	        c[str[i]-'a']+=1;
	    int f = 0;
	    int x = (str.length()+1)/2;
	    for(int i=0; i<26; i++)
	    {
	        if(c[i]>x)
	            f = 1;
	    }
	    if(f)
	    {
	        if(str1=="-1")
	            cout<<0<<endl;
	        else
	            cout<<1<<endl;
	    }
	    else
	    {
    	    int a[26] = {0};
    	    int b[26] = {0};
    	    for(int i=0; i<str.length(); i++)
    	        a[str[i]-'a']+=1;
    	    for(int i=0; i<str1.length(); i++)
    	        b[str1[i]-'a']+=1;
    	        
    	    for(int i=0; i<26; i++)
    	        if(a[i]!=b[i])
    	            flag = 0;
    	    
    	    for(int i=0;i<str1.length();i++)
    	    {
    		    if(i>0)
    		        if(str1[i-1]==str1[i])
    			        flag=0;
    	    }
    	    if(flag==1)
    		    cout<<"1\n";
    	    else
    	        cout<<"0\n";
	    }
	}
    return 0;
}
// } Driver Code Ends