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
    void lv(TreeNode* root,vector<vector<int>> &ans)
    {
        queue<TreeNode*>q;
        q.push(root);
        int a=0;
        while(!q.empty())
        {
            vector<int>l;
            int s=q.size();
            for(int i=0;i<s;i++)
            {   
                TreeNode* node=q.front();
                q.pop();
                l.push_back(node->val);
                if(node->left)
                {
                    q.push(node->left);
                }
                if(node->right)
                {
                    q.push(node->right);
                }
                
             }
                if(a%2==0)
                {
                    ans.push_back(l);
                }else{
                    reverse(l.begin(),l.end());
                    ans.push_back(l);
                }
            a++;
         }
    }
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        
        vector<vector<int>>ans;
        if(!root)
            return ans;
        lv(root,ans);
        return ans;
        
    }
};