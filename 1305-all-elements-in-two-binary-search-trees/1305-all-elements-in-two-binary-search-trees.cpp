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
    void root1_in(TreeNode* root,vector<int>&ans)
    {
        if(root==NULL)
            return;
        ans.push_back(root->val);
        if(root->left)
            root1_in(root->left,ans);
        
         if(root->right)
            root1_in(root->right,ans);
    }
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
     vector<int>ans;
        root1_in(root1,ans);
        root1_in(root2,ans);
        sort(ans.begin(),ans.end());
        return ans;
    }
};