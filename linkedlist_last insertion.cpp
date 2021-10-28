#include<bits/stdc++.h>
using namespace std;
    struct listnode
    {
        int val;
        struct listnode* next;
    };
    void insertdel(listnode** head, int v)
    {
        listnode* cur=(*head);
        listnode* temp=NULL;
        temp=new listnode();
        
         while((cur)->next!=NULL)
       {
        (cur)=(cur)->next;
       }
       (cur)->next=temp;
        temp->val=v;
        temp->next=NULL;
     
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
    
  
    
    insertdel(&head,11);
    display(head);
    
    
 return 0;
}
