#include<bits/stdc++.h>
using namespace std;
int  main()
{
	int n ,c;
	c=0;
	cin>>n;
    int a,b;
    a=0;
    b=1;
	while(n>0)
	{
	c=a+b;
	a=b;
	b=c;
	}
	cout<<c;
}
