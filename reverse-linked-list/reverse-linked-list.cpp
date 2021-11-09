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
    ListNode* reverseList(ListNode* head) {
     if(head==NULL)
            return head;
        ListNode* curr = head;
        ListNode* rlast = new ListNode();
        rlast->val = curr->val;
        rlast->next = NULL;
        curr = curr -> next;
        ListNode* rhead = rlast;
        
        while(curr!=NULL) {
            ListNode* temp = new ListNode();
            temp->val = curr->val;
            curr = curr->next;
            temp -> next = rhead;
            rhead = temp;
        }
        
        return rhead;
    }
};