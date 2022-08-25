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
    int maxi=0;
    void zig(TreeNode* root,int dir,int curr){
        if(root==NULL)return;
        maxi=max(maxi,curr);
        if(dir==0)
        {
            if(root->left)
                zig(root->left,1,curr+1);
             if(root->right)
                zig(root->right,0,1);
        }else 
        {
            if(root->right)
                zig(root->right,0,curr+1);
             if(root->left)
                zig(root->left,1,1);
        }
      //  return maxi;
    }
    int longestZigZag(TreeNode* root) {
     zig(root,0,0);
        return maxi;
    }
};

