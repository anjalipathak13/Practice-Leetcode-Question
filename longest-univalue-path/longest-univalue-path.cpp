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
    int ans=0;
    int solve(TreeNode* root)
    {
        if(root==NULL)
            return 0;
        int leftP=solve(root->left);
        int rightP=solve(root->right);
        int l=0;
        int r=0;
        if(root->left!=NULL && root->val==root->left->val)
        {
          l=leftP+1;  
        }
          if(root->right!=NULL && root->val==root->right->val)
        {
          r=rightP+1;  
        }
        ans=max(ans,l+r);
        return max(l,r);
    }
    int longestUnivaluePath(TreeNode* root) {
        solve(root);
        return ans;
        
    }
};