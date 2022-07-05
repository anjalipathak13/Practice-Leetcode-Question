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
    bool identical(TreeNode* root, TreeNode* sub)
    {
        if(root==NULL && sub==NULL)
            return true;
        if(root==NULL || sub==NULL)
            return false;
        return (root->val==sub->val&& identical(root->left,sub->left)&&identical(root->right,sub->right));
            
    }
    bool check(TreeNode* root, TreeNode* sub)
    {
        if(sub==NULL)
            return true;
        if(root==NULL)
            return false;
        if(identical(root,sub))
            return true;
        return check(root->left,sub)||check(root->right,sub);
    }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
       if(check(root,subRoot))
           return true;
        else
            return false;
        
    }
};