class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> result;
        vector<int> subset;
        createsubset(nums, 0, result, subset);
        return result;
    }
    void createsubset(vector<int>& nums, int index, vector<vector<int>>& result, vector<int> subset){
        if(index == nums.size()){
            result.push_back(subset);
            return;
        }
        subset.push_back(nums[index]);
        createsubset(nums, index+1, result, subset);
        subset.pop_back();
        createsubset(nums, index+1, result, subset);
    }
};