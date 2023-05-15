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
        if(head==NULL) return NULL;
        if(head->next==NULL) return head;
        
        ListNode* temp = head;
        ListNode* n1;
        ListNode* n2;
        int len=0;
        
        while(temp!=NULL){
            len++;
            temp = temp->next;
        }
        
        int lastk =(len-k);
        temp = head;
        while(temp!=NULL && k!=1){
            temp = temp ->next;
            k--;
        }
        n1=temp;
        
         temp = head;
        while(temp!=NULL && lastk!=0){
            temp = temp ->next;
            lastk--;
        }
        n2=temp;
        
        swap(n1->val,n2->val);
        return head;
    }
};