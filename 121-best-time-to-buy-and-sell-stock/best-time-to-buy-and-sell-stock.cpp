class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mm = INT_MAX;
        int maxProfit = 0;
        for (int i = 0; i < prices.size(); i++) {

            mm = min(mm, prices[i]);

            maxProfit = max(maxProfit, prices[i] - mm);
        }
        return maxProfit;
    }
};