class Solution {
public:
    int possible(vector<int>& nums, int n, int d){
        int sum = 0;
        for(int i=0;i<n;i++){
            sum = sum + ceil((double)nums[i]/(double)d);
        }
        return sum;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int n = nums.size();
        int low = 1, high = *max_element(nums.begin(), nums.end()), ans = -1;
        while(low <= high){
            int mid = (low+high)/2;
            if(possible(nums, n, mid) <= threshold){
                ans = mid;
                high = mid - 1;
            }
            else low = mid+1;
        }
        return ans;
    }
};