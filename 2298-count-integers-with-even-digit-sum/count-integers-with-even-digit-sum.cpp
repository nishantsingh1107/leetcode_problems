class Solution {
public:
    int countEven(int num) {
        int a = num, sum = 0;
        while(num > 0){
            sum += num%10;
            num /= 10;
        }
        if(sum%2 == 0){
            return a/2;
        }
        return (a-1)/2;
    }
};