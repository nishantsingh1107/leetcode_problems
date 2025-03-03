class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> low, high, equal;
        for(int i=0;i<nums.size();i++){
            if(nums[i] < pivot) low.push_back(nums[i]);
            else if(nums[i] > pivot) high.push_back(nums[i]);
            else equal.push_back(nums[i]);
        }
        low.insert(low.end(), equal.begin(), equal.end());
        low.insert(low.end(), high.begin(), high.end());
        return low;
    }
};