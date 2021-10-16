#include<iostream>
using namespace std;
int main()
{

int x,n;
cin>>n>>x;
int r=1;
while(x)
{
	if(x%2==0)
	{
		n=n*n;
		x=x/2;
	}
	else
	{
		r*=n;
		x=x-1;
	}
}
cout<<r;
return 0;
}
