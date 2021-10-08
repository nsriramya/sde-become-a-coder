class Solution {
public:
    int maxArea(vector<int>&h) 
	{
        int ma=0;
      int  l=0;
      int   hi=h.size()-1;
        while(l<hi)
        {
             ma=max(ma,(hi-l)*min(h[l],h[hi]));
            if(h[l]<h[hi])
                l++;
            else
                hi--;
        }
        return ma;

        
    }
};
