class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int nums0 = 0;
        int nums1 = 1;
        if(nums.size()==1 && nums[0]<=0)    return 1;
        int i=0;
        bool a = true;
        while(i<nums.size() && a==true){
            while(nums[i]<=0 && i<nums.size()-1)    i++;
            if(i>0 && nums[i]==nums[i-1]){
                i++;
            }
            else if(nums[i]!=nums1){
                a=false;
                return nums1;
            }
            else{
                i++;
                nums1++;
            }
        }
        return nums[nums.size()-1]+1;
    }
};