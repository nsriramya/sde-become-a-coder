#include<bits/stdc++.h>
using namespace std;
 
 int rev(int n,int r,int res)
 {
     
     if(r==0)
     {
         return res;
     }
    if(r%2==0)
      {
         return rev(n*n,r/2,res);
     }
     else
     {
         res=res*n;
         return rev(n,r-1,res);
     }
     
   
 }
 
int main()
{
    int n,r;
    int res=1;
    cin>>n>>r;
/*while(r>0)
{
 if(r%2==0)
 {
      n=n*n;
     r=r/2;
    
 }
 else
 {
     res=res*n;
    r=r-1;
 }
 
}*/
cout<<rev(n,r,res);

}

