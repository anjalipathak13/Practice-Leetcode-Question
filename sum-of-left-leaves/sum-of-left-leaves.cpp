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
    int sum=0;
    void solve(TreeNode* root)
    {
    if(root==nullptr)
            return;
        
            solve(root->left);
            solve(root->right);
            if(root->left!=nullptr&&root->left->left==nullptr  && root->left->right==nullptr)
            {
                sum+=root->left->val;
            }
    }      
     
public:
    int sumOfLeftLeaves(TreeNode* root) {
       solve(root);
        return sum;
        
    }
};