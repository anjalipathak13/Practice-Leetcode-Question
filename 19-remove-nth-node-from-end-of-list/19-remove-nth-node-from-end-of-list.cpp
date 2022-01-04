/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
       ListNode* temp=head;
        int c=1;
        if(head==NULL)
            return NULL;
        if(head->next==NULL && n==1)
            return NULL;
        while(temp->next!=NULL)
        {
            temp=temp->next;
            c++;
        }
        if(c==n)
            return head->next;
       int k=c-n;
        temp=head;
        while(k-1>0)
        {
            temp=temp->next;
            k--;
        }
        ListNode* d=temp->next;
        temp->next=d->next;
        delete(d);
        return head;
        
    }
};