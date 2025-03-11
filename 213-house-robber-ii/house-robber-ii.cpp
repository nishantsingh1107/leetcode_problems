class Solution {
public:
    int robLin(vector<int>& nums, int start, int end){
        int prev1=0, prev2=0;
        for(int i=start; i<=end; i++){
            int temp = prev1;
            prev1 = max(prev1, prev2+nums[i]);
            prev2 = temp;
        }
        return prev1;
    }
    int rob(vector<int>& nums){
        int n = nums.size();
        if(n == 0) return 0;
        if(n == 1) return nums[0];
        return max(robLin(nums, 0, n-2), robLin(nums, 1, n-1));
    }
};