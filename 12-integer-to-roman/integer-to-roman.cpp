class Solution {
public:
    string intToRoman(int num) {
        int number[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
        string symbol[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
        int a = 0;
        string str = "";
        while(num>0){
            if(num>=number[a]){
                str += symbol[a];
                num -= number[a];
            }
            else a++;
        }
        return str;
    }
};