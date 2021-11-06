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
    ListNode *detectCycle(ListNode *head) {
    ListNode* s=head;
        ListNode* t=head;
        ListNode* f=head;
        while(f!=NULL and  f->next!=NULL )
        {
           
            s=s->next;
            f=f->next->next;
            if(s==f)
            {
                
                break;
            }
        }
        if(f==NULL || f->next==NULL)
        {
            return NULL;
        }
            
        while(t!=s)
        {
        t=t->next;
        s=s->next;
        }
        return t;
        
    }
};
