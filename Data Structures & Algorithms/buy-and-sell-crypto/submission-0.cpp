class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min = prices[0];
        int maxProfit = 0;

        for (int i = 0; i < prices.size(); i++) {

            // update min if a smaller one has been found
            if (prices[i] < min) {
                min = prices[i];
            }

            int profit = prices[i] - min;
            maxProfit = max(profit,maxProfit);
        
        }
        return maxProfit;
        
    }
};
