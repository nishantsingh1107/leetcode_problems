class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int min = 0, max = numbers.size()-1;
        while(min < max){
            if(numbers[min] + numbers[max] < target){
                min++;
            }
            else if(numbers[min] + numbers[max] > target){
                max--;
            }
            else{
                return {min+1, max+1};
            }
        }
        return {1,1};
    }
};