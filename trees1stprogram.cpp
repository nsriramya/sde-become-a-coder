#include<bits/stdc++.h>
using namespace std;
struct node
  {
      int data;
      node* left;
     node * right;
        node(int val)
  {
      data=val;
      left=NULL;
      right=NULL;
  }
  };
 
void  inorder(node* root)
  {
  if(root!=NULL)
  {
      inorder(root->left);
      cout<<root->data<<" ";
      inorder(root->right);
  }
  }
int main()
{ 
  struct node * root=new node(10);
  root->left = new node(2);
    root->right = new node(3);
    root->left->left=new node(90);
    
   inorder(root);
   
 return 0;
}
