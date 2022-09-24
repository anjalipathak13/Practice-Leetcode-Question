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
    vector<vector<int> >v;
    void path(TreeNode* root,vector<int>q,int t,int sum)
    {
        
        if(!root)
            return ;
        q.push_back(root->val);
        sum+=root->val;
        if(root->left==NULL && root->right==NULL && sum==t )
        {
         v.push_back(q);
                    
        }
        path(root->left,q,t,sum);
        path(root->right,q,t,sum);
        q.pop_back();
        
        
    }
public:
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<int>q;
        int sum=0;
        path(root,q,targetSum,sum);
        return v;
        }
};