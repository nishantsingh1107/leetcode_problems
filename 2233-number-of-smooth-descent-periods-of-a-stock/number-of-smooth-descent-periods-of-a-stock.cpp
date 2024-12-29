class Solution {
public:
    long long getDescentPeriods(vector<int>& prices) {
        long count = 1;
        int x = 0;
        for(int i=1;i<prices.size();i++){
            if(prices[i-1] - prices[i] != 1){
                x = i;
            }
            count += i-x+1;
        }
        return count;
    }
};