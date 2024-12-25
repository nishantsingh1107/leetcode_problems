class Solution {
public:
    int smallestRangeI(vector<int>& nums, int k) {
        int min = nums[0], max = nums[0];
        for(int i=0;i<nums.size();i++){
            if(nums[i]<min){
                min = nums[i];
            }
            if(nums[i]>max){
                max = nums[i];
            }
        }
        if((max-k)-(min+k) < 0){
            return 0;
        }
        else{
            return (max-k)-(min+k); 
        }
    }
};