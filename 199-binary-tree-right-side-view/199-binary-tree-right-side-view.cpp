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
    vector<int>ans;
    void bfs(TreeNode *root)
    {
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty())
        {
            int level=0;
            int s=q.size();
            while(s--)
            {    
                
            TreeNode* f=q.front();
            q.pop();
                 level=f->val;
                if(f->left)
                    q.push(f->left);
                if(f->right)
                    q.push(f->right);
               
                
                    
            }
            cout<<level<<" ";
            ans.push_back(level);
        }
            
    }
    vector<int> rightSideView(TreeNode* root) {
        if(root==NULL)
            return ans;
      bfs(root); 
        return ans;
    }
};