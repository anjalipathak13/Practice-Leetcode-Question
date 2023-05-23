//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	struct Node *left;
	struct Node *right;
	
	Node(int x){
	    data = x;
	    left = NULL;
	    right = NULL;
	}
};


// } Driver Code Ends
/* Structre of the Node of the Binary Tree is as follows
struct Node
{
        int data;
        struct Node *left, *right;
};
*/
// your task is to complete this function
// function should create a new binary tree
// function should return the root node to the 
// new binary tree formed
class Solution{
  public:
    Node* helpConstructBinaryTree(int pre[], int preMirror[], int i1, int i2, int len, unordered_map<int,int> &ind){
        // base case
        if(len<1)   return NULL;
        if(len==1)  return new Node(pre[i1]);
        // recursion calling
        Node* root=new Node(pre[i1]);
        // ll - length of left subtree, lr - length of right subtree
        int ll=ind[preMirror[i2+1]]-i1-1;
        int lr=len-ll-1;
        root->left=helpConstructBinaryTree(pre,preMirror,i1+1,i2+lr+1,ll,ind);
        root->right=helpConstructBinaryTree(pre,preMirror,i1+lr+1,i2+1,lr,ind);
        return root;
    }
   
    Node* constructBinaryTree(int pre[], int preMirror[], int n){
        // like construct binary tree from inorder and preorder
        unordered_map<int,int> ind;
        for(int i=0;i<n;i++)
            ind[pre[i]]=i;
        Node *ans=helpConstructBinaryTree(pre,preMirror,0,0,n,ind);
        return ans;
    }
};

//{ Driver Code Starts.

void printInorder(Node* node)
{
	if (node == NULL)return;
	printInorder(node->left);
	cout<<node->data<<" ";
	printInorder(node->right);
}

// Driver program to test above functions
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int preOrder[n];
	    int preOrderMirror[n];
	    for(int i=0; i<n; i++)cin>>preOrder[i];
	    for(int i=0; i<n; i++)cin>>preOrderMirror[i];
	    Solution obj;
	    printInorder(obj.constructBinaryTree(preOrder, preOrderMirror, n));
	    cout<<endl;
    }
	return 0;
}
// } Driver Code Ends