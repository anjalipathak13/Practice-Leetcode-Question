//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
struct Node* modifyTheList(struct Node *head);
struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
};

void print(Node *head)
{
    Node *temp=head;
	while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout<<endl;
}


// } Driver Code Ends
/*Complete the function below
Node is as follows:
struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
};
*/
class Solution{
    public:
    Node* reverse(Node* head){
        if(head == NULL || head->next == NULL) return head;
        
        Node* curr = head;
        Node* prev = NULL;
        Node* temp;
        
        while(curr){
            temp = curr->next;
            curr->next = prev;
            
            prev = curr;
            curr = temp;
        }
         return prev;
    }
    
    struct Node* modifyTheList(struct Node *head)
    {
        
        Node* slow = head;
        Node* fast = head;
        
        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
        }
        
        Node *prev = head;
        while(prev->next != slow)prev = prev->next;
        prev->next = reverse(prev->next);
        
        Node *curr = head, *mid = prev->next;
        
        while(curr!=prev->next && mid){
            int x = curr->data;
            curr->data = mid->data-curr->data;
            mid->data = x;
            curr = curr->next;
            mid = mid->next;
        }
        
        prev->next = reverse(prev->next);
         
         return head;
            
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		struct Node *head = NULL,*temp=NULL;
		while(n--){
		    int a;
            cin>>a;
			Node *newNode = new Node(a);
			if(head==NULL)
                head=newNode;
            else
                temp->next=newNode;
            temp=newNode;
		}
		Solution obj;
		head = obj.modifyTheList(head);
		print(head);
		
	}
    return 0;
}
// } Driver Code Ends