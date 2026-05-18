
class Solution {
    vector<int> original;
    int n;

public:
    Solution(vector<int>& nums) {
        original = nums;
        n = nums.size();
    }

    vector<int> reset() {
        return original;
    }

    vector<int> shuffle() {
        vector<int> shuffled = original;
        for (int i = n - 1; i > 0; i--) { // TC:O(n) and SC:O(1)
            int j = rand() % (i + 1); // random index in [0, i]
            swap(shuffled[i], shuffled[j]);
        }
        return shuffled;
    }
};