class Solution {
public:
    int maximumGroups(vector<int>& grades) {
        int ans = 0, total = 0, n = grades.size();
        while(total+ans < n){
            total += ++ans;
        }
        return ans;
    }
};