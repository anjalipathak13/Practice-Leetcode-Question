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
int bfs(TreeNode* root){
    if(root==NULL)
        return 0;
    
    queue<TreeNode*>q;
    q.push(root);
    int sum=0;
    while(!q.empty())
    {  sum=0;
        int s=q.size();
        while(s--)
        {
            TreeNode* node=q.front();
            q.pop();
            sum+=node->val;
            if(node->left)
                q.push(node->left);
            if(node->right)
                q.push(node->right);
        }
    }
        
    return sum;    
    }
    int deepestLeavesSum(TreeNode* root) {
       int ans=bfs(root);
        return ans;
    }
};