class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int a = 0, b = nums.size()-1;
        while(b>a){
            if(nums[a]%2 != 0 && nums[b]%2 == 0){
                swap(nums[a], nums[b]);
            }
            while(a<b && nums[a]%2 == 0){
                a++;
            }
            while(a<b && nums[b]%2 != 0){
                b--;
            }
        }
        return nums;
    }
};