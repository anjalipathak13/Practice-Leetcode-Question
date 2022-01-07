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
    ListNode* reverse(ListNode* head)
    {
         ListNode* curr=head;
         ListNode* next=NULL;
         ListNode* prev=NULL;
        while(curr!=NULL)
        {
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        
        }
    return prev;
    }
public:
    bool isPalindrome(ListNode* head) {
      ListNode* slow=head;
    ListNode* fast=head;
        while( fast->next!=NULL && fast->next->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        slow->next=reverse(slow->next);
        ListNode* temp=head;
        ListNode* temp2=slow->next;
        while(temp2)
        {
            if(temp->val!=temp2->val){
            return false;}
            temp=temp->next;
            temp2=temp2->next;
        }
        return true;
    }
};