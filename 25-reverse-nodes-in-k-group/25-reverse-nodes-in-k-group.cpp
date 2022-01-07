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
    
      int length(ListNode* head)
    {
        int len = 0;
        while(head != NULL)
        {
            len++;
            head = head->next;
        }
        return len;
    }

    ListNode* reverseKGroup(ListNode* head, int k) 
    {
        if(head==NULL)
            return NULL;
        int x = length(head);
        if(x < k)
            return head;
        ListNode *prev = NULL, *curr = head, *next = NULL;
        int count = 0;
        while(curr != NULL && count < k)
        {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
            count++;
        }
        if(curr != NULL)
            head->next = reverseKGroup(next, k);

        return prev;
    }
};