class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int b = prices[0];
        int profit = 0;
        for(int i=0;i<prices.size();i++){
            if(prices[i] < b){
                b = prices[i];
            }
            if(prices[i] - b > profit){
                profit = prices[i] - b;
            }
            
        }
        return profit;
    }
};