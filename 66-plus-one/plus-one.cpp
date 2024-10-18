#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();

        // Traverse the digits from the last element to the first
        for (int i = n - 1; i >= 0; i--) {
            if (digits[i] < 9) {
                // If the digit is less than 9, just increment it and return the result
                digits[i] += 1;
                return digits;
            }
            // If the digit is 9, set it to 0 (since 9 + 1 = 10, we carry the 1 to the next digit)
            digits[i] = 0;
        }

        // If all digits are 9, we need to add a new 1 at the beginning
        digits.insert(digits.begin(), 1);
        
        return digits;
    }
};
