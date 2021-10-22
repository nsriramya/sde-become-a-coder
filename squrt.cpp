class Solution {
public:
    int mySqrt(int x)
    {
     long long mid;
        int l=1;
        int h=x;
        while(l<=h)
        {
       mid=(l+(h-l)/2);
        if(mid*mid==x) 
        {
            return mid;
        }
        else if(mid*mid<x)
        {
            l=mid+1;
        }
        else if(mid*mid>x)
        {
            h=mid-1;
        }
        }
        return h;
    }
};

