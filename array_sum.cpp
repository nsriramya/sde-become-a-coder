#include<bits/stdc++.h> 
using namespace std; 
int main() 
{ 
    int n,s,c=0; 
    cin>>n; 
    int arr[n]; 
    cout<<"enter sum\n"; 
    cin>>s; 
    for(int i=0;i<n;i++) 
    { 
       cin>>arr[i]; 
    } 
    for (int i=0; i <n; i++) 
    { 
       for (int j=i; j<=n; j++)
       { 
          int sum=0; 
          for (int k=i; k<=j; k++) 
          { 
              sum+=arr[k]; 
          } 
          if(sum==s) 
          {
               cout<<"YES\n";
               c=1; 
          } 
       } 
    } 
    if(c!=1) 
    { 
       cout<<"no"; 
    }  
    return 0; 
}
