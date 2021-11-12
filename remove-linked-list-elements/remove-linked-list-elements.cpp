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
    ListNode* removeElements(ListNode* head, int val) {
     if(!head) return nullptr;
        ListNode* dummyHead = new ListNode(-1); //#2
        dummyHead->next = head;
        ListNode* cur = dummyHead;
        while(cur->next) {
            if(cur->next->val == val) {
                ListNode* del = cur->next;
                cur->next = cur->next->next;
                delete del; //#1
            } else {
                cur = cur->next;    
            }
        }
        head = dummyHead->next;
        delete dummyHead; //#2
        return head;
    }
};