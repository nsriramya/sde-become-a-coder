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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *t2=headB;
        
        while(headA!=NULL)
        {
            while(t2!=NULL)
            {
           if(headA==t2)
           {
               return headA;
           }
                t2=t2->next;
            
            }
            t2=headB;
            headA=headA->next;
        }
         return 0;
        }
       
    
};
