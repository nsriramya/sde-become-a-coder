class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
       vector<int>v;
               vector<int>ve;
        
        int l=0;
        int h=nums.size();
        for(int i=0;i<h;i++)
        { 
            if(nums[i]==target)
            {
               v.push_back(i); 
            }
            
        }
        if(v.size()==0)
        {
             v.push_back(-1); 
            v.push_back(-1);
            return v;
        }
        int m=*max_element(v.begin(), v.end());
        int mi= *min_element(v.begin(), v.end());
       ve.push_back(mi); 
            ve.push_back(m);
        return ve;
    }
    
       /* while(l<h)
        {
            
            int m=(l+h)/2;
            if(target==nums[m])
            {
                v.push_back(m);
            }
            else if(nums[m]>target)
            {
                h=m-1;
            }
            else
            {
                l=m+1;
            }
        }v.push_back(-1);
        return v;
    }*/
};
