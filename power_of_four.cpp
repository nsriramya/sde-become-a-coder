#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	while(n>1)
	{
		if(n%4!=0)
		{
			cout<<0;
			n=n/4;
		}
	cout<<1;
	}
}
