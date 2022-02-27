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
    int widthOfBinaryTree(TreeNode* root) {
        if(root==NULL)
            return 0;
       unsigned int ans=0;
        queue<pair<TreeNode*,unsigned int>>q;
        q.push({root,0});
        while(!q.empty())
        {  unsigned int mini=q.front().second;
           unsigned int s=q.size();
         int p=s-1;
         int i=0;
         unsigned int left=0;
         unsigned int right=0;
            while(s--)
            {  unsigned int curr_node=q.front().second-mini;
                TreeNode* node=q.front().first;
                q.pop();
                if(i==0)
                     left=curr_node;
             if(i==p)
                  right=curr_node;
                if(node->left){
                   unsigned int a= 2*curr_node+1;
                    q.push({node->left,a});
                }
                if(node->right)
                {   unsigned int b= 2*curr_node+2;
                    q.push({node->right,b});
                }
               i++; 
            }
            
            ans=max(ans,(right-left+1)); 
        }    
      return ans;  
    }
};