class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st;
        int maxCount = 0;
        for(auto it: nums) {
            st.insert(it);
        }

        for(auto i: st) {
            if(st.find(i - 1) == st.end()) {      //initial point
                int count = 1;
                int index = 1;
                while(st.find(i + index) != st.end()) {
                    count++;
                    index++;
                }
                maxCount = max(count,maxCount);
            }
        }
        return maxCount;
    }
};