//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
 
/* Link list node */
struct Node
{
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
};

void push(struct Node** head_ref, int new_data)
{
   
    struct Node* new_node = new Node(new_data);
    
    new_node->next = (*head_ref);
    (*head_ref)    = new_node;
} 

int countTriplets(struct Node* head, int x) ;

/* Driver program to test count function*/
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n , x ,i , num;
        struct Node *head = NULL;
        cin>>n>>x;
        for(i=0;i<n;i++)
        {
            cin>>num;
            push(&head,num);
        }
 
    /* Check the count function */
    cout <<countTriplets(head, x)<< endl;
    }
    return 0;
}
// } Driver Code Ends


//User function Template for C++

int countTriplets(struct Node* head, int x) 
{ 
    Node* temp=head;
    vector<int>arr;
    while(temp!=NULL){
        arr.push_back(temp->data);
        temp=temp->next;
    }
    int c=0;
   // sort(arr.begin(),arr.end());
    for(int i=0;i<arr.size()-2;i++){
        int sum=x-arr[i];
        int l=i+1;
        int h=arr.size()-1;
        while(l<h){
            if(arr[l]+arr[h]==sum){
                c++;
                l++;
                h--;
            }
            else if(arr[l]+arr[h]>sum){
                h--;
            }
            else
               l++;
        }
    }
    return c;
} 
