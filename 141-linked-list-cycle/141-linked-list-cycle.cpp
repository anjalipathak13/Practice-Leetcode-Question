/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
       if(head == NULL || head->next == NULL)
            return false;
        
        ListNode *sptr = head;
        ListNode *fptr = head->next;
               
        while(sptr!=NULL && fptr!=NULL && fptr->next!=NULL)
        {
            if(sptr == fptr)
            {
                return true;
            }
            sptr = sptr->next;
            fptr = fptr->next->next;            
        }
        
        return false;
    }
};