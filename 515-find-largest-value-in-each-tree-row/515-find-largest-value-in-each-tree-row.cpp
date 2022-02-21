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
    vector<int> largestValues(TreeNode* root) {
        vector<int>ans;
      queue<TreeNode*>q;
        if(root==NULL)
            return ans;
        q.push(root);
        while(!q.empty())
        {
            int maxi=INT_MIN;
            int s=q.size();
            while(s--)
            {
                TreeNode* node=q.front();
                q.pop();
                maxi=max(maxi,node->val);
                if(node->left)
                    q.push(node->left);
                if(node->right)
                    q.push(node->right);
                
                }
            ans.push_back(maxi);
        }
        return ans;
    }
};