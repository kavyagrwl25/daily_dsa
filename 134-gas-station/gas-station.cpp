class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int currentGas = 0;
        int currentCost = 0;
        int ansIndex = 0;
        int totalGas = 0;
        for (int i = 0; i < gas.size(); i++) {
            totalGas = totalGas + gas[i] - cost[i];
            currentGas = currentGas + gas[i];
            currentCost = currentCost + cost[i];
            int move = currentGas - currentCost;
            if (move < 0) {
                currentGas = 0;
                currentCost = 0;
                ansIndex = i + 1;
            }
        }
        return totalGas>=0 ? ansIndex : -1;
    }
};