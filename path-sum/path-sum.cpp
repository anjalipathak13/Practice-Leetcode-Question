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
    bool dfs(TreeNode* root,int value,int t)
    {
        if(!root)
            return false;
        value+=root->val;
        if(!root->left  && !root->right)
        {
            if(value==t)
                return true;
        }
       return (dfs(root->left,value,t)||dfs(root->right,value,t));
    }
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
         bool ans=dfs(root,0,targetSum);
       return ans;
    }
};