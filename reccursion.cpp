#include<bits/stdc++.h>
using namespace std;
int se(int n)
{
      if(n==1||n==2||n==3)
     {
        return n+1;
     }
     else
     {
         return se(n-1)+se(n-2)+se(n-3);
     }
}
 int main()
 {
     int n;
     cin>>n;
   
    cout<<se(n);
 
}
