class Solution {
public:
    int uniquePaths(int m, int n) {
        long res = 1;
        for(int i=1;i<m;i++){
            res = res * (n+i-1)/i;
        }
        return (int)res;
    }
};