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
    bool levelor(TreeNode* root)
    {
      queue<TreeNode*>q;
        q.push(root);
        int check=0;
        while(!(q.empty()))
        {
              TreeNode* node=q.front();
                q.pop();
                 if((node->left!=NULL&&check==1)||(node->right!=NULL&&check==1))
                return false;
            if(node->left==NULL&&node->right!=NULL)
                return false;
            if((node->left!=NULL&&node->right==NULL)||(node->left==NULL&&node->right==NULL))
                check=1;
             
                if(node->left!=NULL)
                    q.push(node->left);
                 if(node->right!=NULL)
                    q.push(node->right);
            }
           
            return true;
        }
    bool isCompleteTree(TreeNode* root) {
      return levelor(root);  
    }
};