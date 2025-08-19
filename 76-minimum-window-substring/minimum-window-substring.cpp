class Solution {
public:
    string minWindow(string s, string t) {
        int l = 0, r = 0, count = 0, len = INT_MAX;
        int n = s.size(), m = t.size(), startidx = -1;
        vector<int> hash(256, 0);
        for(int it : t){
            hash[it]++;
        }
        while(r < n){
            if(hash[s[r]] > 0) count++;
            hash[s[r]]--;
            while(count == m){
                if(r-l+1 < len){
                    len = r-l+1;
                    startidx = l;
                }
                hash[s[l]]++;
                if(hash[s[l]] > 0) count--;
                l++;
            }
            r++;
        }
        return startidx == -1 ? "" : s.substr(startidx, len);
    }
};