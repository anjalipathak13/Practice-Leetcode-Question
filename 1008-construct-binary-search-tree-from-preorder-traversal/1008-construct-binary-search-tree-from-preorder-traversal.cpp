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
   
    TreeNode* bst(vector<int> &preorder, int cmp, int &i){
        if(i >= preorder.size()) return NULL;
        if(preorder[i] > cmp){
            i--;
            return NULL;
        }
        
        TreeNode *root = new TreeNode(preorder[i]);
        
        int temp = preorder[i];
        i++;
        root->left = bst(preorder, temp, i);
        i++;
        root->right = bst(preorder, cmp, i);
        
        return root;
    }
    
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        int i=0;
        return bst(preorder, INT_MAX, i);
    }
};