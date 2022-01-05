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
     int length(ListNode* s)
    {
        int cnt=0;
        while(s!=NULL)
        {
            cnt++;
            s=s->next;
        }
        return cnt;
    }
    ListNode* rotateRight(ListNode* head, int k) {
        ListNode *tmp=head;
        ListNode *p=head;
        int n=length(head);
        if(n==0)
        {
            return head;
        }
        k=k%n;
        if(k==0)
        {
            return head;
        }
        else
        {
            for(int i=0;i<n-k-1;i++)
            {
                tmp=tmp->next;
            }
            while(p->next!=NULL)
            {
                p=p->next;
            }
            p->next=head;
            head=tmp->next;
            tmp->next=NULL;
            return head;
        }
        
    }
};