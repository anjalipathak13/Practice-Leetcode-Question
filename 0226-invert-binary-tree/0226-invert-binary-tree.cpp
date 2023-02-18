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
    void invertTreeHelper(TreeNode* root1, TreeNode* root2) {
        if (root1 == NULL)
            return;
        root2->val = root1->val;
        if (root1->right != NULL) {
            root2->left = new TreeNode();
            invertTreeHelper(root1->right, root2->left);
        }
        if (root1->left != NULL) {
            root2->right = new TreeNode();
            invertTreeHelper(root1->left, root2->right);
        }
    }
    
    TreeNode* invertTree1(TreeNode* root) {
        if (root == NULL)
            return NULL;
        TreeNode* res = new TreeNode();
        invertTreeHelper(root, res);
        return res;
    }
    
    TreeNode* invertTree(TreeNode* root) {
        if (root == NULL)
            return NULL;
        TreeNode* left = root->left;
        TreeNode* right = root->right;
        root->left = invertTree(right);
        root->right = invertTree(left);
        return root;
        
    }
};