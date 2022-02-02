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
    void levelo(TreeNode* root,vector<double>&ans)
    {
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty())
        {
            int c=0;
            int si=q.size();
            double sum=0;
            for(int i=0;i<si;i++)
            {
               TreeNode* node=q.front();
               q.pop();
                c++;
               sum+=node->val;
                if(node->left!=NULL)
                    q.push(node->left);
                if(node->right!=NULL)
                    q.push(node->right);
            }
            ans.push_back(sum/c);    
        }
}
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double>ans;
        levelo(root,ans);
        return ans;
    }
};