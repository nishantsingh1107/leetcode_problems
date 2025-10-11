class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int, int> mpp;
        for(auto n : nums){
            mpp[n]++;
        }
        for(auto n : mpp){
            if(n.second == 1) return n.first;
        }
        return -1;
    }
};