class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        long maximum = 0;
        for(int i=0;i<nums.size();i++){
            for(int j=nums.size()-1;j>i;j--){
                int k = i+1;
                while(k<j){
                    maximum = max(maximum, (long(nums[i]-nums[k])*nums[j]));
                    k++;
                }
            }
        }
        if(maximum < 0) return 0;
        return maximum;
    }
};