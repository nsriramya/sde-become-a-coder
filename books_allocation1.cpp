	#include<bits/stdc++.h>
using namespace std;
bool ispossible(int n,int array[], int mid,int students)
{
	int count=1;
	int sum_of_all_ele=0;
	for(int i=0;i<n;i++)
	{
		if(sum_of_all_ele+array[i]>mid)
		{
			count++;
			sum_of_all_ele=array[i];
			if(sum_of_all_ele>mid) 
			{
				return false;
		     }
		}
		else
		{
			sum_of_all_ele+=array[i];
		}
	}
     if(count>students)
    	{
    		return false;
    	}
	return true;
}
int allocating_books(int n,int a[],int st) 
{
	int low,high,mid,sum=0,ans=-1;
	for(int i=0;i<n;i++)
	{
		 sum=sum+a[i];
	}
	low=*min_element(a,a+n);
	high=sum;
	while(low<=high)
	{
		mid=low+((high-low)/2);
		if(ispossible(n,a,mid,st))
		{
			ans=mid;
			high=mid-1;
		}
		else
		low=mid+1;
	}
	return ans;
}
int main()
{
	int n,st;
	cin>>n>>st;
	int a[n];
	for(int i=0;i<n;i++)cin>>a[i];
	cout<<allocating_books(n,a,st);
	return 0;
}
