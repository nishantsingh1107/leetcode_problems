class Solution {
public:
    int rob(vector<int>& nums) {
        int a = 0, b = 0;
        for(int i=0;i<nums.size();i++){
            int curr = nums[i];
            int temp = max(b, a + curr);
            a = b;
            b = temp;
        }
        return b;
    }
};