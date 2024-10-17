class Solution {
public:
    bool isPalindrome(string s) {
        string cleaned_string;
        for (char ch : s) {
            if (isalnum(ch)) {
                cleaned_string += tolower(ch);
            }
        }
        string reversed_string = cleaned_string;
        reverse(reversed_string.begin(), reversed_string.end());

        return cleaned_string == reversed_string;
    }
};