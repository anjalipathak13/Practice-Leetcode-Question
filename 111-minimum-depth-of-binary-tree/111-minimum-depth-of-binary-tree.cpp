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
    int help(TreeNode *root)
    {
        if(root==NULL)
            return 0;
        int lh=help(root->left);
        int rh=help(root->right);
       if(lh==0) return 1+rh;
        else if(rh==0) return 1+lh;
        else return 1+ min(lh,rh);
            
            
    }
        
    int minDepth(TreeNode* root) {
      return help(root);
          
    }
};