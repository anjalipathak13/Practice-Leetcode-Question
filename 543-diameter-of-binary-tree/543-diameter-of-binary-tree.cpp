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
    int dia(TreeNode* root,int& maxi)
    {
        if(!root)
            return 0;
        int l=dia(root->left,maxi);
        int r=dia(root->right,maxi);
        maxi=max(maxi,l+r);
        return 1+max(l,r);
        
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int diameter=0;
        dia(root,diameter); 
        return diameter;
    }
};