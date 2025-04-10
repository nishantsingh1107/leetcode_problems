class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        int n = g.size(), m = s.size();
        int l=0, r=0, cnt=0;
        while(l < n && r < m){
            if(s[r] >= g[l]){
                // cnt++;
                r++;
                l++;
            }
            else r++;
        }
        return l;
    }
};