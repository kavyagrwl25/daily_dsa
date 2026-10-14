class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int maxGas = 0;
        int maxCost = 0;
        int ansIndex = 0;
        int a = 0;
        for (int i = 0; i < gas.size(); i++) {
            a = a + gas[i] - cost[i];
            maxGas = maxGas + gas[i];
            maxCost = maxCost + cost[i];
            int move = maxGas - maxCost;
            /* if (move >= 0 && i == gas.size() - 1)
                break; */
            if (move < 0) {
                maxGas = 0;
                maxCost = 0;
                ansIndex = i + 1;
            }
        }
        return a>=0 ? ansIndex : -1;
    }
};