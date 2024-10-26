class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        if(n == 0){
            return;
        }
        k = k % n;

        reverse(nums.begin(), nums.end());
        if(k > 0){
            reverse(nums.begin(), nums.begin() + k);
        }
        if(k < n){
            reverse(nums.begin() + k, nums.end());
        }
    }
};