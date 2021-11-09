/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
         if (root == NULL)
        return root;
    
    queue<Node *>q;
    q.push(root);
    
    while(!q.empty())
    {
        int n = q.size();
        
        for (int i = 0; i < n; i++)
        {
            Node *first  = q.front();
            q.pop();
            if (i == n-1)
            {
                first->next = NULL;
            } else
            {
                Node * second = q.front();
                first->next = second;
            }
            if(first->left)
                q.push(first->left);
            if(first->right)
                q.push(first->right);
        }
    }
    return root;
    }
};