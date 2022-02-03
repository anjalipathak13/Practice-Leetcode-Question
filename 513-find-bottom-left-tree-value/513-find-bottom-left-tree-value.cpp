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
    int bottom(TreeNode* root)
    {
        queue<TreeNode*>q;
        q.push(root);
        int no=0;
        while(!q.empty())
        {
            //l=0;
            int si=q.size();
            int f=0;
            
            for(int i=0;i<si;i++)
            {   
                TreeNode* node=q.front();
                q.pop();
                if(f==0)
                {
                    f=1;
                    no=node->val;
                }
               if(node->left)
                   q.push(node->left);
                if(node->right)
                    q.push(node->right);
                    
            }
            
            
        }
        
       return no; 
    } 
    int findBottomLeftValue(TreeNode* root) {
     return bottom(root);   
    }
};