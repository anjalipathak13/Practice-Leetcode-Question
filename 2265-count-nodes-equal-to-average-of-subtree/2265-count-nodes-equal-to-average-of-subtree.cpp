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
    
     int count=0;
    int sum(TreeNode* root,int &c){
        if(!root)
            return 0;
        c++;
        int s=sum(root->left,c)+sum(root->right,c);
        return s+root->val;
    }
    void solve(TreeNode* root){
        if(!root)
            return;
        int c=0;
        int s=sum(root,c);
        if(c!=0 && s/c==root->val)
            count++;
        solve(root->left);
        solve(root->right);
    }
    int averageOfSubtree(TreeNode* root) {
        solve(root);
        return count;   
    }
};