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
    void levelor(TreeNode* root,vector<vector<int>>&ans)
    {
        if(root==NULL)
            return;
    queue<TreeNode*>q;
        q.push(root);
        while(!(q.empty()))
        {
            vector<int>l;
            int si=q.size();
            for(int i=0;i<si;i++)
            {  TreeNode* node=q.front();
                q.pop();
                l.push_back(node->val);
                if(node->left!=NULL)
                    q.push(node->left);
                 if(node->right!=NULL)
                    q.push(node->right);
            }
            ans.push_back(l);
           }
        }
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>>ans;
       levelor(root,ans);
        reverse(ans.begin(),ans.end());
        return ans;
    }
};