class Solution {
public:
    int maxi(vector<int>& nums){
        int maxi = INT_MIN;
        int n = nums.size();
        for(int i=0;i<n;i++){
            maxi = max(maxi, nums[i]);
        }
        return maxi;
    }
    int possible(vector<int>& nums, int n, int d){
        int sum = 0;
        for(int i=0;i<n;i++){
            sum = sum + ceil((double)nums[i]/(double)d);
        }
        return sum;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int n = nums.size();
        int low = 1, high = maxi(nums), ans = -1;
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