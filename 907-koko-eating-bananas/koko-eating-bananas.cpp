class Solution {
public:
    int findMax(vector<int>& piles) {
        int maxi = INT_MIN;
        int n = piles.size();
        for (int i = 0; i < n; i++) {
            maxi = max(maxi, piles[i]);
        }
        return maxi;
    }

    long long calculate_total_hours(vector<int>& piles, int hourly) {
        long long total = 0;
        int n = piles.size();
        for (int i = 0; i < n; i++) {
            total += (piles[i] + hourly - 1) / hourly;
        }
        return total;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1, high = findMax(piles);
        while (low <= high) {
            int mid = (low + high) / 2;
            long long totalhrs = calculate_total_hours(piles, mid);
            if (totalhrs <= h) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return low;
    }
};
