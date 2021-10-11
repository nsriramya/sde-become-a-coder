#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n1,n2;
    cin>>n1>>n2;
    int a[n1];
    int sum=0;
    int b[n2];
    for(int i=0;i<n1;i++)
    {
        cin>>a[i];
    }
    for(int j=0;j<n1;j++)
    {
        cin>>b[j];
    }
    int asum=0;
    int bsum=0;
    for(int i=0;i<n1;i++)
    {
        asum+=a[i];
    }
    for(int j=0;j<n2;j++)
    {
        bsum+=b[j];
    }
    for(int i=0;i<n1;i++)
    {
        sum=asum*bsum;
    }
    cout<<sum;
}
