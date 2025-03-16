class Solution {
public:
    vector<vector<int>> result;
    
    void solve(int index, vector<int>& nums, vector<int>& current, int target) {
        if (target == 0) {
            result.push_back(current);
            return;
        }
        if (target < 0 || index == nums.size()) return;
        solve(index + 1, nums, current, target);
        current.push_back(nums[index]);
        solve(index, nums, current, target - nums[index]);
        current.pop_back();
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        result.clear();
        vector<int> current;
        solve(0, candidates, current, target);
        return result;
    }
};