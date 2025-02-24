class Solution {
public:
    int maxArea(vector<int>& height) {
        int low = 0, high = height.size()-1, area = 0;
        while(low < high){
            int a = min(height[low], height[high]) * (high - low);
            area = max(area, a);
            if(height[low] < height[high]) low++;
            else high--;
        }
        return area;
    }
};