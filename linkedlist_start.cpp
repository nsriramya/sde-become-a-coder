#include<bits/stdc++.h>
using namespace std;
    struct listnode
    {
        int val;
        struct listnode* next;
    };
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
     first->val=8;
    first->next=second;
     second->val=9;
    second->next=NULL;
    
    display(head);
    
    
 return 0;
}
