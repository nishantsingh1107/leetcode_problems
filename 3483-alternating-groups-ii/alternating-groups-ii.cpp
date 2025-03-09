class Solution {
public:
    int numberOfAlternatingGroups(vector<int>& colors, int k) {
        int n = colors.size();
        int cnt = 0, low = 0;
        for(int high=0;high<n+k-1;high++){
            if(high > 0 && colors[high%n] == colors[(high-1) % n]){
                low = high;
            }
            if(high-low+1 >= k) cnt++;
        }
        return cnt; 
    }
};