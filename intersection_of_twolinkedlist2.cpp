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
        int a=0;
        int b=0;
        int m=0;
        ListNode *t1=headA;
        ListNode *t2=headB;
        while(t1!=NULL)
        {
            a++;
            t1=t1->next;
        }
         while(t2!=NULL)
        {
            b++;
            t2=t2->next;
        }
        if(a>b)
        {
            m=a-b;
             while(m>0)
                {
                headA=headA->next;
                 m--;
            }    
            
        }
        else
        {
            
            m=b-a;
            while(m>0)
                {
                headB=headB->next;
                m--;
            }        
        }
       
        while((headA!=NULL)&&(headB!=NULL))
        {
            if(headA==headB)
            {
                return headA;
            }
            headA=headA->next;
            headB=headB->next;
        }
        
        return headA;
    }
        
        
       
    
};
