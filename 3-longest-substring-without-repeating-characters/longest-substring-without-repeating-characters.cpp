class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxlen = 0, n = s.length();
        vector<int> hash(256, -1);
        int left = 0, right = 0;
        while(right < n){
            if(hash[s[right]] != -1){
                if(hash[s[right]] >= left){
                    left = hash[s[right]] + 1;
                }
            }
            maxlen = max(maxlen, right-left+1);
            hash[s[right]] = right;
            right++;
        }
        return maxlen;
    }
};