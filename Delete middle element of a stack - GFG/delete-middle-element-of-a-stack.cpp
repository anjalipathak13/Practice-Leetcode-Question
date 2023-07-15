//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution
{
    public:
    //Function to delete middle element of a stack.
    void ModifiedStack(stack<int>&s,int mid,int n){
        if(mid==1){
            s.pop();
            return;
        }
        
        if(!s.empty()){
            int temp = s.top();
            s.pop();
            ModifiedStack(s,mid-1,n);
            s.push(temp);
        }
        return;
    }
    void deleteMid(stack<int>&s, int sizeOfStack)
    {   int mid=0;
        if(sizeOfStack%2!=0)
         mid = (sizeOfStack+1)/2;
        else
         mid = (sizeOfStack)/2+1;
        ModifiedStack(s,mid,sizeOfStack);
        return;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--)
    {
        int sizeOfStack;
        cin>>sizeOfStack;
        
        stack<int> myStack;
        
        for(int i=0;i<sizeOfStack;i++)
        {
            int x;
            cin>>x;
            myStack.push(x);    
        }

            Solution ob;
            ob.deleteMid(myStack,myStack.size());
            while(!myStack.empty())
            {
                cout<<myStack.top()<<" ";
                myStack.pop();
            }
        cout<<endl;
    }   
    return 0;
}

// } Driver Code Ends