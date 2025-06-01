class Solution {
public:
    int maxRotateFunction(vector<int>& nums) {
        int n = nums.size();
        int sum = accumulate(nums.begin(), nums.end(), 0);
        int curr = 0;
        for(int i=0;i<n;i++){
            curr += i * nums[i];
        }
        int maxValue = curr;
        for(int j=1;j<n;j++){
            curr += sum - n * nums[n - j];
            maxValue = max(maxValue, curr);
        }
        return maxValue;
    }
};