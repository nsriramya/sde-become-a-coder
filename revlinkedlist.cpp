#include<bits/stdc++.h>
using namespace std;
    struct listnode
    {
        int val;
        struct listnode* next;
    };
    void rev(listnode** head)
   {
      listnode *ne=NULL;
       listnode* temp=NULL;
       while((*head)!=NULL)
       {
           ne=(*head)->next;
           (*head)->next=temp;
           temp=(*head);
          (*head)=ne;
       }
       (*head)=temp;
    }
    void display(listnode* head)
    {
     
        while(head!=NULL)
        {
        cout<<head->val<<"  ";
        head=head->next;
        }
    }
int main()
{
    
    listnode* head=NULL;
    listnode* first=NULL;
    listnode* second=NULL;
    
    
    head=new listnode();
    first=new listnode();
   second=new listnode();
   head->val=7;
    head->next=first;
     first->val =8;
    first->next=second;
    second->val=10;
    second->next=NULL;
   rev(&head);
     
 
    display(head);
    
    
 return 0;
}
