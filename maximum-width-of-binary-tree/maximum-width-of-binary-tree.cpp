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
        int ans=0;
        queue<pair<TreeNode* ,int>>q;
        q.push({root,0});
        while(!q.empty())
        {
            int min=q.front().second;
              int start=0;
                int last=0;   
            int size=q.size();
            for(int i=0;i<size;i++)
            {  
                int id=q.front().second-min;
            TreeNode* node=q.front().first;
                q.pop();
             if(i==0)
                 start=id;
             if(i==size-1)
                last=id;
                if(node->left!=NULL)
                q.push({node->left,2*id+1});
                if(node->right!=NULL)
                    q.push({node->right,2*id+2});
               
                    
                    
            }
            ans=max(ans,last-start+1);
            
        }
      return ans;  
    }
};