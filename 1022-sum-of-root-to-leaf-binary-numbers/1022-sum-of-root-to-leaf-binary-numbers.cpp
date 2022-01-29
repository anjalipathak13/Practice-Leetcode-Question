/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int sum1=0;
    int calculate(vector<int> v){
       int n=0;
        for(int i=0;i<v.size();i++)
            n=n*2+v[i];
        return n; 
    }
    
    void sum(TreeNode* root,vector<int>&ans)
    {   if(!root)
        return;
       ans.push_back(root->val);
        if(root->left==NULL &&  root->right==NULL)
        {
        sum1+=calculate(ans);
            }
        
            sum(root->left,ans);
            sum(root->right,ans);
            ans.pop_back();
            }
        
    int sumRootToLeaf(TreeNode* root) {
        if(root==NULL)
            return 0;
      vector<int>ans;
      sum(root,ans);
      return sum1;  
    }
};