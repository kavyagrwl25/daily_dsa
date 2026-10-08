class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) {
        stack<pair<int, int>> st;
        vector<int> arr(temp.size(), 0);
        for(int i = temp.size() - 1; i >= 0; i--) {
            while(!st.empty() && st.top().first <= temp[i]) {
                st.pop();
            }
            if(!st.empty()) {
                arr[i] = st.top().second - i;
            }
            st.push({temp[i], i});
        }
        return arr;
    }
};


// NGE => so use MONO DEC STACK