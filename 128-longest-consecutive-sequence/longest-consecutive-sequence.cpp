class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st(nums.begin(), nums.end());

        int maxCount = 0;

        for (int it : st) {

            // Start only at the beginning of a sequence
            if (st.find(it - 1) == st.end()) {

                int current = it;
                int count = 1;

                // Keep moving forward
                while (st.find(current + 1) != st.end()) {
                    current++;
                    count++;
                }

                maxCount = max(maxCount, count);
            }
        }

        return maxCount;
    }
};