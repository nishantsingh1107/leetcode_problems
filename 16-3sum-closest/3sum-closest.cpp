class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int closest_sum = INT_MAX / 2;
        for(int i=0;i<nums.size()-2;i++){
            int low = i+1, high = nums.size()-1;
            while(low < high){
                int curr_sum = nums[i] + nums[low] + nums[high];;
                if(abs(curr_sum - target) < abs(closest_sum - target)){
                    closest_sum = curr_sum;
                }
                if(curr_sum < target) low++;
                else if(curr_sum > target) high--;
                else return curr_sum;
            }
        }
        return closest_sum;
    }
};