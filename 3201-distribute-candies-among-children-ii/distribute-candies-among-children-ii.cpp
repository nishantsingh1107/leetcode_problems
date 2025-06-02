class Solution {
public:
    long long distributeCandies(int n, int limit) {
        long long result = 0;
        for(int i=0;i<=min(limit, n);i++){
            int rem = n-i;
            int miny = max(0, rem-limit);
            int maxy = min(rem, limit);
            if(miny <= maxy) result += (maxy - miny + 1); 
        }
        return result;
    }
};