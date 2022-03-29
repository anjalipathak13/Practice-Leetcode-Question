/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    int findor(TreeNode* root,TreeNode* target)
    {  int value=0;
          queue<TreeNode*>q;
        q.push(root);
        while(!q.empty())
        {
            TreeNode*  node=q.front();
            q.pop();
            if(node==target)
            {
                value=node->val;
                break;
            }
            if(node->left)
                q.push(node->left);
            if(node->right)
                q.push(node->right);
        }
        return value;
    }
    TreeNode* tar(int value,TreeNode* root)
               {
                  queue<TreeNode*>q;
        q.push(root);
        while(!q.empty())
        {
            TreeNode*  node=q.front();
            q.pop();
            if(node->val==value)
            {
                return node;
                break;
            }
            if(node->left)
                q.push(node->left);
            if(node->right)
                q.push(node->right);
        }
        return root;
          
               }
TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
       int value=findor(original,target);
   // cout<<value;
        TreeNode* node=tar(value,cloned);
        return node;
    }
               
};