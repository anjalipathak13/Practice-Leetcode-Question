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
    int getDecimalValue(ListNode* head) {
        string s;
        ListNode* temp=head;
       
        while(temp!=NULL)
        {
            s+=to_string(temp->val);
            temp=temp->next;
        }
        
         int n=s.length();
        int ans=0;
        int p=n-1;
      
        for(int i=0;i<n;i++)
        { 
            int a=s[i]-'0';
            
           ans= ans+(a*(pow(2,p--))); 
        }
        return ans;
    }
};