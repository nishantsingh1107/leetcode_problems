class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        int maxArea = 0, maxDiag = 0;
        for(int i=0;i<dimensions.size();i++){
            int length = dimensions[i][0];
            int width = dimensions[i][1];
            int diag = ((length*length) + (width * width));
            if(diag > maxDiag || (length * width > maxArea && diag == maxDiag)){
                maxDiag = diag;
                maxArea = length * width;
            }
        }
        return maxArea;
    }
};