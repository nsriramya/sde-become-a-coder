#include <bits/stdc++.h>
using namespace std;
 
int main()
{
	int n;
	cin>>n;
	vector<int>ve;
	for(int i=0;i<n;i++)
	{
		int num;
		cin>>num;
		ve.push_back(num);
	}
	reverse(ve.begin(), ve.end());//2  8  3  2  1
	
	auto it=find(ve.begin(),ve.end(),3);//3
	cout<<*it<<"\n";
	
	sort(ve.begin(),ve.end());//1 2 2 3 8
		for(auto it:ve)
	{
		cout<<it<<" ";
	}
    return 0;
}
