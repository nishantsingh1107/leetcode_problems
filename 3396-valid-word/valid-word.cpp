class Solution {
public:
    bool isValid(string word) {
        int n = word.length();
        if (n < 3) return false;
        int vowelCount = 0, consonantCount = 0;
        for (int i=0;i<n;i++) {
            if (!isalnum(word[i])) return false;
            if (isalpha(word[i])) {
                char lower = tolower(word[i]);
                if (lower=='a' || lower=='e' || lower=='i' || lower=='o' || lower=='u') vowelCount++;
                else consonantCount++;
            }
        }
        return vowelCount > 0 && consonantCount > 0;
    }
};
