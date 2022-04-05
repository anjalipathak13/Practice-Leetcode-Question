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
    TreeNode* build(int &i,vector<int>& a,int upper)
    {
        if(a.size()==i||a[i]>upper)
            return NULL;
        TreeNode* root=new TreeNode(a[i++]);
        root->left=build(i,a,root->val);
        root->right=build(i,a,upper);
        return root;
    }
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        int i=0;
        return build(i,preorder,INT_MAX);
    }
};