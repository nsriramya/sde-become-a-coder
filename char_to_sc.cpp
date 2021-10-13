#include<bits/stdc++.h>
using namespace std;
int main()
{
string 	s;
cout<<"enter string\n";
cin>>s;
string s1="#";
string s2="*";
for(int i=0;i<s.length();i++)
{
	if(i%2==0)
	{
		s.replace(i,1,s1);
	}
	else
	{
			s.replace(i,1,s2);
	}
}
	 
	  
	cout<<s;
}
