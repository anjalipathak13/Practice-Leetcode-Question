/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
void mark(TreeNode* root, unordered_map<TreeNode* , TreeNode*>&parent)
{
    queue<TreeNode*>q;
    q.push(root);
    while(!q.empty())
    {
        TreeNode* current=q.front();
        q.pop();
        if(current->left){
        parent[current->left]=current;
            q.push(current->left);
        }
         if(current->right){
        parent[current->right]=current;
             q.push(current->right);
         }
}
    
}
vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        unordered_map<TreeNode* , TreeNode*>parent;
        mark(root,parent);
         unordered_map<TreeNode* , bool>vis;
        queue<TreeNode*>q;
       q.push(target);
      vis[target]=true;
       int level=0;
       while(!q.empty())
       {
           int si=q.size();
           if(level++==k)
               break;
           for(int i=0;i<si;i++)
           {
              TreeNode* current=q.front();
               q.pop();
              if(current->left && !vis[current->left])
              {
                  q.push(current->left);
                      vis[current->left]=true;
              }
               
               if(current->right && !vis[current->right])
              {
                  q.push(current->right);
                      vis[current->right]=true;
              }
              
               if(parent[current] && !vis[parent[current]])
               {
                   q.push(parent[current]);
                   vis[parent[current]]=true;
               }
           }
       }
    vector<int>result;
    while(!q.empty())
    {
        TreeNode* curr=q.front();
        q.pop();
        result.push_back(curr->val);
    }
    return result;
    }
};