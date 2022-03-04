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
    void inorder(TreeNode* root,set<int>&vec)
    {
        if(root==NULL)
            return;
        vec.insert(root->val);
        if(root->left)
        inorder(root->left,vec);
        if(root->right)
        inorder(root->right,vec);    
    }
    int findSecondMinimumValue(TreeNode* root) {
     set<int>vec;
     inorder(root,vec);
        if(vec.size()==1)
            return -1;
        int mini=INT_MAX;
      auto it=vec.begin();
        it++;
    return *it;
    }
};