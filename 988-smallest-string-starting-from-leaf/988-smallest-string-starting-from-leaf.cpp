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
    void solve(TreeNode* root,string s,string &ans)
    {    s+=(char)(root->val+'a');
        if(root->left==NULL && root->right==NULL)
        {
           // s+=(char)(root->val+'a');
            reverse(s.begin(),s.end());
            if(ans=="")
            {
                ans=s;
            }else{
                ans=min(ans,s);
            }
           // s.pop_back();
            return;
        }
       
        if(root->left)
            solve(root->left,s,ans);
        if(root->right)
        solve(root->right,s,ans);
       // s.pop_back();
    }
    string smallestFromLeaf(TreeNode* root) {
      if(root==NULL)
          return "";
        string s,ans;
        solve(root,s,ans);
        
        return ans;
        
    }
};