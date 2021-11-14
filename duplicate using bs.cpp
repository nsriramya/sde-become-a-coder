class Solution {
public:
int findDuplicate(vector& nums)
{
int n=nums.size(); //[1,n-1]
/*
Apply Binary search on the rang [1,n-1]
for each mid, count the no of digits in nums that are less then or equal to mid, if this count is greater then mid it mean there are duplicate no's inside the array that are less then mid , so move r=mid-1, otherwise move l=mid +1;
*/

  int l=1;
  int r=n-1;
  
  while(l<=r){
    int mid=(l+r)/2;
    
    int count=0;
    for(int x:nums){
      if(x<=mid)
        count++;
    }
      if(count<=mid)
        l=mid+1;
    else
      r=mid-1;
     
  }
    return l;
}
};
