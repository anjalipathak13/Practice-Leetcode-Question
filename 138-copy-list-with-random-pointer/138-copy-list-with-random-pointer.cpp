/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
      Node* itr=head;
      Node* front=head;
        while(itr!=NULL)
        {
            front=itr->next;
            Node* copy=new Node(itr->val);
            itr->next=copy;
            copy->next=front;
            itr=front;
        }
        
       itr=head;
        while(itr!=NULL)
        {    if(itr->random!=NULL){
            itr->next->random=itr->random->next;
        }
            itr=itr->next->next;
        
                
          }
        
        Node* dummy=new Node(0);
        Node* temp=dummy;
        itr=head;
        front=NULL;
        while(itr!=NULL)
        {
            front=itr->next->next;
            temp->next=itr->next;
            itr->next=front;
            itr=front;
            temp=temp->next;
                
        }
        return dummy->next;     
    }
};