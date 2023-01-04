//{ Driver Code Starts
//

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int val)
    {
        data=val;
        next=NULL;
    }
};

Node* inputList(int size)
{
    Node *head, *tail;
    int val;
    
    cin>>val;
    head = tail = new Node(val);
    
    while(--size)
    {
        cin>>val;
        tail->next = new Node(val);
        tail = tail->next;
    }
    
    return head;
}

void printList(Node* n)
{
    while(n)
    {
        cout<< n->data << " ";
        n = n->next;
    }
}

Node* findIntersection(Node* head1, Node* head2);

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n,m;
	    cin>> n >> m;
	    
	    Node* head1 = inputList(n);
	    Node* head2 = inputList(m);
	    
	    Node* result = findIntersection(head1, head2);
	    
	    printList(result);
	    cout<< endl;
	}
	return 0;
}

// } Driver Code Ends


/* The structure of the Linked list Node is as follows:

struct Node
{
    int data;
    Node *next;
    Node(int val)
    {
        data=val;
        next=NULL;
    }
};

*/

Node* findIntersection(Node* head1, Node* head2)
{
if(head1==NULL || head2==NULL) return NULL;
    
    Node *h1 = head1, *h2 = head2;
    
    Node* dummy= new Node(0);
    Node* curr = dummy;
    
    while(h1!=NULL && h2!=NULL){
        
            
          //  if(newHead==NULL) newHead = newNode;
            if(h1->data==h2->data){
                curr->next= new Node(h1->data);
                curr=curr->next;
            
                 h1 = h1->next;
                  h2 = h2->next;
            
        }else if(h1->data < h2->data){
            h1 = h1->next;
        }else{
            h2 = h2->next;
        }
    }
    
    return dummy->next;
}

