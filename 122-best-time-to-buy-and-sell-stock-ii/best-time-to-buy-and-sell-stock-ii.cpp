class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy = 0;
        int sell = 1;
        int sum = 0;
        int maxSum = 0;
        while (sell != prices.size()) {
            if (prices[buy] < prices[sell]) {

                sum = sum + prices[sell] - prices[buy];
            }

            buy++;
            sell++;
        }
        return sum;
    }
};