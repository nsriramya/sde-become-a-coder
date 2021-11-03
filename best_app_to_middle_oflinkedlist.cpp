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
    ListNode* middleNode(ListNode* head) {
        ListNode* s=head;
        ListNode* f=head;
       
        while(f->next!=NULL and f->next->next!=NULL)
        {
          
            s=s->next;
              f=f->next->next;
           
        }
         if(f->next!=NULL)
            {
                s=s->next;
            }
        return s;
    }
};
