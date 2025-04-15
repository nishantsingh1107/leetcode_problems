class Solution {
public:
    int maxProfit(vector<int>& prices, int fee) {
        int hold = -prices[0];
        int profit = 0;
        for(int i=1;i<prices.size();i++){
            hold = max(hold, profit - prices[i]);
            profit = max(profit, hold+prices[i]-fee);
        }
        return profit;
    }
};