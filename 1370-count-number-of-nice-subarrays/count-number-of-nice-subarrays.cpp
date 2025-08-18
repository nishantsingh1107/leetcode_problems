class Solution {
public:
    int helper(vector<int>& nums, int k){
        int left = 0, right = 0, sum = 0, count = 0;
        if(k < 0) return 0;
        while(right < nums.size()){
            sum += (nums[right] % 2);
            while(sum > k){
                sum -= (nums[left] % 2);
                left++;
            }
            count += (right-left+1);
            right++;
        }
        return count;
    }
    int numberOfSubarrays(vector<int>& nums, int k) {
        return helper(nums, k) - helper(nums, k-1);
    }
};