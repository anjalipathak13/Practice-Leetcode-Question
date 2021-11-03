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
#define ll long long
class Solution {
    ll ans=0;
    void dfs(TreeNode* root,ll valu)
    {
        if(!root)
            return ;
        valu*=10;
        valu+=root->val;
        if(!root->left && !root->right)
        {
            ans+=valu;
            return;
        }
 dfs(root->left,valu);
    dfs(root->right,valu);
        
    }
public:
    int sumNumbers(TreeNode* root) {
     if(root==0)
         return 0;
        dfs(root,0);
        return ans;
    }
};