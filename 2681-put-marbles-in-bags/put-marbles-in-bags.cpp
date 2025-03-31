class Solution {
public:
    long long putMarbles(vector<int>& weights, int k) {
        int n = weights.size();
        vector<int> splits(n-1);
        for(int i=0;i<n-1;i++){
            splits[i] = weights[i] + weights[i+1];
        }
        sort(splits.begin(), splits.end());
        long long minsplit = accumulate(splits.begin(), splits.begin()+(k-1), 0LL);
        long long maxsplit = accumulate(splits.end()-(k-1), splits.end(), 0LL);

        return maxsplit-minsplit;
    }
};