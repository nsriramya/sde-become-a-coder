#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, swap1;
    cin>>n;
    int arr[n];//integer array with n elemnets
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];//reading elements
	}
	cout<<"Before Sorting: ";
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
	}
	cout<<endl;
    for(int i=0; i<n-1; i++) // checks from 0 to n-1 elements
    {
        swap1 = 0;
        // it checks until the numbers not upto sorted, for each iteration each element from last will be sorted equal to i
        for(int j=0; j<n-i-1; j++)
        {
            if(arr[j] > arr[j+1]) // check if greater or not
            {
                swap1++; // counts no of times swapp takes place
                swap(arr[j], arr[j+1]); //swaps elements
            }
        }
        if(!swap1) // breaks if no swap done as it will be already sorted
            break;
    }
    cout<<"After Sorted: ";
    for(int i=0; i<n; i++)
        cout<<arr[i]<<" ";
}
