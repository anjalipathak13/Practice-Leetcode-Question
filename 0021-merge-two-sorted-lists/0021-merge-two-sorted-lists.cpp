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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        //when l1 is null l2 is the answer
        if(list1==NULL)
        return list2;

        if(list2==NULL)//when l2 is null l1 is the answer
        return list1;

        //make sure l1 first node is smaller than l2
        if(list1->val>list2->val){
            ListNode* temp=list1;
            list1=list2;
            list2=temp;
        }
        
        ListNode* res=list1;  //head of the merge list 
        while(list1!=NULL && list2!=NULL){
            ListNode* tmp=NULL;
            
            while(list1!=NULL && list1->val<=list2->val){
                tmp=list1;
                list1=list1->next;
            }
            tmp->next=list2;

            //always l1 is smaller swap l1 and l2
            ListNode* temp=list1;
            list1=list2;
            list2=temp;
        }
        return res;
    }
};