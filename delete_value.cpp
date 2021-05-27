#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int value,found=-1;
    cin>>value;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==value)
        {
            for(int j=i;j<n-1;j++)
            {
                arr[j]=arr[j+1];
            }
            found=0;
            n--;
            break;
        }
    }
    if(found==-1)
    {
       cout<<"value not found";
    }
    else
    {
        for(int i=0;i<n;i++)
         {
                cout<<arr[i]<<" ";
        }
    }
}
