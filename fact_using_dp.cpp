#include<bits/stdc++.h>
using namespace std;
int dp[1000000];
int factorial(int n)
{
	if(n==1)
	{
		return 1;
	}
	if(dp[n]!=-1)
	{
		return dp[n];
	}
	return dp[n]=n*factorial(n-1);
}
int main()
{
	int num;
	cin>>num;
	for(int i=0;i<num+1;i++)
	{
		dp[i]=-1;
	}
	cout<<factorial(num)<<endl;
	for(int i=0;i<num+1;i++)
	{
		cout<<dp[i]<<" ";
	}
	return 0;
}
	
