#include<iostream>
using namespace std;
int isprime(int n,int i)
{
    int count=0;
   if(i==1)
     {
      return 1;
     }
   else if(n%i==0)
     {
       count++;	
     }
   else
   {
     return isprime(n,i-1);	//calling isprime again(reccursion)
    }
}
int main()
{
       int n,flag; 
        cout<<("ENTER A NUMBER : ");
        cin>>n;
        flag= isprime(n, n / 2);
        if (flag!=0)//if flag =0    not a prime
        {
           cout<<(" PRIME NUMBER\n");
         }
     else
      {  
       cout<<("NOT  A PRIME NUMBER\n");
      }
}
