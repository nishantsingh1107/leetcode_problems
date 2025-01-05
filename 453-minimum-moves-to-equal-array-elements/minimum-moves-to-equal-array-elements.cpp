class Solution {
public:
    int minMoves(vector<int>& nums) {
        int min_value = INT_MAX;
        for(int i=0;i<nums.size();i++){
            min_value = min(min_value, nums[i]);
        }
        int total_moves = 0;
        for(int i=0;i<nums.size();i++){
            total_moves += (nums[i]-min_value);
        }
        return total_moves;
    }
};