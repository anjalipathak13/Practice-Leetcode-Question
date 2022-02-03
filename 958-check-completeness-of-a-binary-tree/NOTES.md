bool isCompleteTree(TreeNode* root) {
queue<TreeNode*>q;
q.push(root);
int check=0;
while(q.size()>0)
{
TreeNode*temp=q.front();
q.pop();
if((temp->left!=NULL&&check==1)||(temp->right!=NULL&&check==1))
return false;
if(temp->left==NULL&&temp->right!=NULL)
return false;
if((temp->left!=NULL&&temp->right==NULL)||(temp->left==NULL&&temp->right==NULL))
check=1;
if(temp->left!=NULL)
{
q.push(temp->left);}
if(temp->right!=NULL)
{
q.push(temp->right);}
}
return true;
}