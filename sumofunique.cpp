class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int sum=0;
        int c[101]={0};
        for(int i=0;i<nums.size();i++)
        {
            c[nums[i]]++;
        }
        
         for(int i=0;i<nums.size();i++)
        {
           if(c[nums[i]]==1)
           {
               sum=sum+nums[i];
           }
        }
        return sum;
    }
};
