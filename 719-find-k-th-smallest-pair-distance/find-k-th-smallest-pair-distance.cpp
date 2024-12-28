class Solution {
public:
    int countPairs(const vector<int>& nums, int dist){
        int count = 0, left = 0;
        for(int right=0;right<nums.size();++right){
            while(nums[right] - nums[left]>dist){
                ++left;
            }
            count += right-left;
        } 
        return count;
    }
    int smallestDistancePair(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int low = 0, high = nums.back()-nums.front();
        while(low<high){
            int mid = low+(high-low)/2;
            if(countPairs(nums, mid) >= k){
                high = mid;
            }
            else{
                low =  mid + 1;
            }
        }
        return low;
    }
};