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
void path(TreeNode* root,string ans,vector<string>&res){
        if(root==NULL){
            return;
        }
        if(root->left==NULL && root->right==NULL){
            ans+=to_string(root->val);
            res.push_back(ans);
            return;
        }
        ans+=to_string(root->val);
        ans+="->";
        path(root->left,ans,res);
        path(root->right,ans,res);
    }
   
public:
    vector<string> binaryTreePaths(TreeNode* root) {
       vector<string>ans;
        if(root==NULL){
            return {};
        }
        path(root,"",ans);
        return ans;
    }
};