class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st;
        if(nums.size() == 0) return 0;
        int maxCount = INT_MIN;
        for (auto it : nums) {
            st.insert(it);
        }
        for(auto it: st) {
            if(st.find(it-1) == st.end()) {
                int count = 1;
                int index = 1;
                while(st.find(it + index) != st.end()) {
                    count++;
                    index++;
                }
                maxCount = max(count, maxCount);
            }
        }
        return maxCount;
    }
};