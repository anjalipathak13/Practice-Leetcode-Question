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
    bool helper(TreeNode* root,int x,int y)
    {   bool f1,f2;
        queue<TreeNode*>q;
        q.push(root);
       
       while(!q.empty())
        {   f1=false;
            f2=false;
          int si=q.size();
           for(int i=0;i<si;i++)
           {
               TreeNode* node=q.front();
                 q.pop();
              if(node->val==x)
                  f1=true;
               if(node->val==y)
                   f2=true;
               
              if((node->left)&&(node->right))
            {
             if((node->left->val==x && node->right->val==y)|| (node->left->val==y && node->right->val==x))
                    return false;
                } 
               if(node->left!=NULL)
                   q.push(node->left);
               if(node->right!=NULL)
                   q.push(node->right);
               
           }
           if(f1&&f2)
                 return true;
            }
       
        return false;
     }
    
    bool isCousins(TreeNode* root, int x, int y) {
       return helper(root,x,y);
           
    }
};