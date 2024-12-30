class Solution {
public:
    int maxArea(vector<int>& height) {
        int l = 0, r = height.size()-1, area = 0;
        while(l < r){
            int a = min(height[l], height[r]) * (r - l);
            area = max(area, a);
            if(height[l] < height[r]){
                l++;
            }else{
                r--;
            }
        }
        return area;
    }
};