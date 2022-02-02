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
class FindElements {
public:
    unordered_map<int,int>m;
    void pre(TreeNode* root,unordered_map<int,int>&m){
       if(!root)
            return;
        if(root->left)
        {
            root->left->val=root->val*2+1;
            m[root->left->val]++;
            pre(root->left,m);
            
        } 
        if(root->right)
        {
            root->right->val=root->val*2+2;
             m[root->right->val]++;
            pre(root->right,m);
        } 
    }
    FindElements(TreeNode* root) {
       root->val=0;
        
        m[0]++;
        pre(root,m);
    }
    
    bool find(int target) {
       if(m.find(target)!=m.end())
           return true;
        else
            return false;
    }
};

/**
 * Your FindElements object will be instantiated and called as such:
 * FindElements* obj = new FindElements(root);
 * bool param_1 = obj->find(target);
 */