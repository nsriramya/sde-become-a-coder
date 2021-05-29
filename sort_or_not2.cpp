#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int flag=1;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
        cin>>arr[i];
    for(int i=0; i<n-1; i++)
    {
        if(arr[i] > arr[i+1])
        {
            cout<<"Not sorted";
            flag = 0;
            break;
        }
    }
    if(flag==1)
    {
        cout<<"Sorted";
    }
    return 0;
}

