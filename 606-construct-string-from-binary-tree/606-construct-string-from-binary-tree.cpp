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
string ans;
    void preorder(TreeNode* root)
    {
        /*if(root==NULL){
            // ans+=")";
            return;
        }
        if(root->left == NULL && root->right!=NULL){
            ans+="()";
        }
        ans+=to_string(root->val);
        if(root->left!=NULL){
            ans+="(";
            preorder(root->left);
            ans+=")";
        }
       // ans+=")";
        if(root->right!=NULL){
            ans+="(";
            preorder(root->right);
            ans+=")";
        }
        
     ans+=")"; */
        
        if(root == NULL)
            return;
        ans += to_string(root -> val);
        if(root -> left == NULL and root -> right == NULL)
            return;
        ans += "(";
        preorder(root -> left);
        ans += ")";
        if(root -> right != NULL){
            ans += "(";
            preorder(root -> right);
            ans += ")";
        }
    }
        
    string tree2str(TreeNode* root) {
       preorder(root);
        return ans;
    }
};