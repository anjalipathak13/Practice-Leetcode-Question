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
class BSTitr{
    stack<TreeNode*>st;
    bool reverse=true;
    public:
    BSTitr(TreeNode* root,bool isrev)
    {
        reverse=isrev;
        pushall(root);
    }
    
    bool hasNext()
    {
        return !st.empty();
    }
    int next()
    {
     TreeNode* tmp=st.top();
        st.pop();
        if(reverse==true)
        {
            pushall(tmp->left);
        }else
        {
            pushall(tmp->right);
        }
        return tmp->val;
    }
        
     private:
    void pushall(TreeNode* root)
    {
        if(root==NULL)
            return;
        st.push(root);
        if(reverse==true){
            if(root->right)
            pushall(root->right);
            }
        else
        {
            if(root->left)
                pushall(root->left);
        }
    }
    
};
class Solution {
public:
    bool findTarget(TreeNode* root, int k) {
        if(!root)
            return NULL;
        BSTitr l(root,false);
         BSTitr r(root,true);
        int i=l.next();
        int j=r.next();
        while(i<j)
        {
            if(i+j==k)return true;
            else if(i + j < k) i = l.next(); 
            else j = r.next(); 
        }
        return false; 
        
    }
};