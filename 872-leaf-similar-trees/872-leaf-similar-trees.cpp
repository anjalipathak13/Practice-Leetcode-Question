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
    void check(TreeNode* root,vector<int>&ans)
    {
        if(root->left==NULL && root->right==NULL){
            ans.push_back(root->val);
            return;
        }
        if(!(root->left==NULL))
        check(root->left,ans);
         if(!(root->right==NULL))
        check(root->right,ans);
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
       vector<int>s1;
       check(root1,s1);
        vector<int>s2;
        check(root2,s2);
        if(s2.size()!=s1.size())
            return false;
        for(int i=0;i<s1.size();i++)
        {
            if(s1[i]!=s2[i])
                return false;
        }
        return true;
    }
};