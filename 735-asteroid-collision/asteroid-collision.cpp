class Solution {
public:
    vector<int> asteroidCollision(vector<int>& a) {
        stack<int> st;

        for (int i = 0; i < a.size(); i++) {
            bool currDestroyed = false;

            if (!st.empty() && a[i] < 0 && st.top() > 0) {

                while (!st.empty() && st.top() > 0) {
                    if (abs(a[i]) > st.top()) {
                        st.pop();
                    }
                    else if (abs(a[i]) == st.top()) {
                        st.pop();
                        currDestroyed = true;
                        break;
                    }
                    else {
                        currDestroyed = true;
                        break;
                    }
                }

                if (!currDestroyed && (st.empty() || st.top() < 0)) {
                    st.push(a[i]);
                }
            }
            else {
                st.push(a[i]);
            }
        }

        vector<int> ans;
        while (!st.empty()) {
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};