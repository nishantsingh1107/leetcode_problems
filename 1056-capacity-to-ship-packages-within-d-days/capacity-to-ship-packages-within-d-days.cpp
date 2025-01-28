class Solution {
public:
    int maxi(vector<int>& weights, int n){
        int maxi = INT_MIN;
        for(int i=0;i<n;i++){
            maxi = max(maxi, weights[i]);
        }
        return maxi;
    }
    int max_weight(vector<int>& weights, int n){
        int maxsum = 0;
        for(int i=0;i<n;i++){
            maxsum += weights[i];
        }
        return maxsum;
    }
    int days_required(vector<int>& weights, int n, int cap){
        int dayreq = 1, load = 0;
        for(int i=0;i<n;i++){
            if(load + weights[i] > cap){
                dayreq += 1;
                load = weights[i];
            }
            else{
                load += weights[i];
            }
        }
        return dayreq;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int n = weights.size();
        int low = maxi(weights, n), high = max_weight(weights, n);
        while(low <= high){
            int mid = (low + high)/2;
            if(days_required(weights, n ,mid) <= days) high = mid - 1;
            else low = mid + 1;
        }
        return low;
    }
};