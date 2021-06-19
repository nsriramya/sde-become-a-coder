#include<bits/stdc++.h>
using namespace std;
void merg(int low, int mid, int high, int arr[])//merge the divided arrays
{
    // First subarray ---> low to mid
    // Second subarray ---> mid+1 to high
    int left = low, right = mid+1;
    vector<int> temp;
    while(left <= mid && right <= high)
    {
        if(arr[left] < arr[right])
        {
            temp.push_back(arr[left]);
            left++;
        }
        else
        {
            temp.push_back(arr[right]);
            right++;
        }
    }
   
    while(left <= mid)
    {
        temp.push_back(arr[left]);
        left++;
    }
     
    while(right <= high)
    {
        temp.push_back(arr[right]);
        right++;
    }
 
    for(int i=low; i<=high; i++)
        arr[i] = temp[i-low];
}

void merge_sort(int low, int high, int arr[])//recursion
{
    if(low == high)
        return;
    int mid = (low + high) / 2;
    merge_sort(low, mid, arr); 
    merge_sort(mid+1, high, arr); 
    merg(low, mid, high, arr);
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
        cin>>arr[i];
    cout<<"Before Sorted: ";
    for(int i=0; i<n; i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    merge_sort(0, n-1, arr);
    cout<<"After Sorted: ";
    for(int i=0; i<n; i++)
        cout<<arr[i]<<" ";
}
