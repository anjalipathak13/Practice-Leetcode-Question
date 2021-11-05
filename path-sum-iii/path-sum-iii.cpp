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
    int output=0;
    void solve(TreeNode* root,int target)
    {
        if(root==NULL)
            return;
       
        if(target==root->val)
            output++;
         target=target - root->val;
        solve(root->left,target);
        solve(root->right,target);
    }
public:
    int pathSum(TreeNode* root, int targetSum) {
         if(root==NULL)
             return 0;
        solve(root,targetSum);
        pathSum(root->left,targetSum);
        pathSum(root->right,targetSum);
        return output;
        
    }
};