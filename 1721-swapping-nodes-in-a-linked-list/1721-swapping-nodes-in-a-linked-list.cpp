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
    ListNode* swapNodes(ListNode* head, int k) {
      ListNode* temp=head;
         ListNode* ptr1=head;
        while(k--)
        {
            temp=ptr1;
            ptr1=ptr1->next;
            
        }
             ListNode* ptr2=head;
        while(ptr1)
        {
            ptr1=ptr1->next;
            ptr2=ptr2->next;
            }
        swap(temp->val,ptr2->val);
        return head;
    }
};