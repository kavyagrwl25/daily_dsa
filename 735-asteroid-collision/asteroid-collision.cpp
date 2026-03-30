class Solution {
public:
    vector<int> asteroidCollision(vector<int>& a) {
        stack<int> st;

        for (int i = 0; i < a.size(); i++) {
            bool destroyed = false;

            while (!st.empty() && st.top() > 0 && a[i] < 0) {
                if (abs(a[i]) > st.top()) {
                    st.pop();
                }
                else if (abs(a[i]) == st.top()) {
                    st.pop();
                    destroyed = true;
                    break;
                }
                else {
                    destroyed = true;
                    break;
                }
            }

            if (!destroyed) {
                st.push(a[i]);
            }
        }

        vector<int> ans(st.size());
        for (int i = st.size() - 1; i >= 0; i--) {
            ans[i] = st.top();
            st.pop();
        }

        return ans;
    }
};