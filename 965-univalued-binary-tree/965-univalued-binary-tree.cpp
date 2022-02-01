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
    bool helper(TreeNode* root,int v)
    {     if(!root)
            return true;
       if(root->val!=v)
            return false;
       
     return helper(root->left,v)&&helper(root->right,v);
    }
    
    
    bool isUnivalTree(TreeNode* root) {
        int v=root->val;
       bool ans=helper(root,v);
        return ans;
    }
};