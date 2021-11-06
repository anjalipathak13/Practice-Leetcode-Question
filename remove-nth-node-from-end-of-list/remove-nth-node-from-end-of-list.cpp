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
        
        ListNode *start=new ListNode(); 
        start->next=head;
        ListNode *slow=start,*fast=start;
        for(int i=0;i<n;i++)
            fast=fast->next; //traverse n nodes
        
        while(fast->next!=nullptr){  //as i told fast will be at the last node
            fast=fast->next;
            slow=slow->next;
        }
        ListNode *del=slow->next; //step to finish matlab khatam krna hai node ko
        slow->next=slow->next->next; //next pointer of the slow will point on just after the victim node
        delete(del); //Khatam \U0001f47b
        return start->next;
    
        
        
    }
};