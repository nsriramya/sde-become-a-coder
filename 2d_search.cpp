class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size(),m=matrix[0].size();
        int x=0,y=m-1;
        while(x<n and y>=0){
            if(target==matrix[x][y])
                return true;
            if(target<matrix[x][y])
                y--;
            else if(target>matrix[x][y])
                x++;
        }
        return false;
    }
};
