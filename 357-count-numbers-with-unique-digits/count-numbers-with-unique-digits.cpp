class Solution {
public:
    int countNumbersWithUniqueDigits(int n) {
        if(n==0) return 1;
        int total = 10, product = 9;
        for(int i=2;i<n+1;i++){
            total += product * (11-i);
            product *= 11-i;
        }
        return total;
    }
};