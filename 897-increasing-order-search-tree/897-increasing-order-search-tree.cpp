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
    void inorder(TreeNode* root,TreeNode* &temp){
        if(!root)
            return;
        inorder(root->left,temp);
        temp->right=new TreeNode(root->val);
        temp=temp->right;
        inorder(root->right,temp);
    }
    TreeNode* increasingBST(TreeNode* root) {
     TreeNode* ans;
       TreeNode* temp=new TreeNode(0);
        ans=temp;
        inorder(root,temp);
        return ans->right;
    }
};