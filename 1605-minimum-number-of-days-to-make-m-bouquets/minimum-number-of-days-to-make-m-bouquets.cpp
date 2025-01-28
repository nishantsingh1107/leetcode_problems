class Solution {
public:
    int maxi(vector<int>& bloomDay){
        int maxi = INT_MIN;
        int n = bloomDay.size();
        for(int i=0;i<n;i++){
            maxi = max(bloomDay[i], maxi);
        }
        return maxi;
    }
    int mini(vector<int>& bloomDay){
        int mini = INT_MAX;
        int n = bloomDay.size();
        for(int i=0;i<n;i++){
            mini = min(bloomDay[i], mini);
        }
        return mini;
    }
    bool possible(vector<int>& bloomDay, int day, int m, int k){
        int n = bloomDay.size();
        int count = 0, bouquets = 0;
        for(int i=0;i<n;i++){
            if(bloomDay[i] <= day) count++;
            else{
                bouquets += (count/k);
                count = 0;
            }
        }
        bouquets += (count/k);
        if(bouquets >= m) return true;
        return false;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        int n = bloomDay.size();
        if((long long)m*k > n) return -1;
        int low = mini(bloomDay), high = maxi(bloomDay), ans = high;
        while(low<=high){
            int mid = (low+high)/2;
            if(possible(bloomDay, mid, m, k) == true){
                ans = mid;
                high = mid-1;
            }
            else low = mid+1;
        }
        return ans;
    }
};