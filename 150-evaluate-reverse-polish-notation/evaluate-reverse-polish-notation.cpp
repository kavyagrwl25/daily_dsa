class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        for (int i = 0; i < tokens.size(); i++) {
            if (tokens[i] == "+") {
                int ans = 0;
                int x = st.top();
                st.pop();
                int y = st.top();
                st.pop();
                ans = x + y;
                st.push(ans);
                }
            else if (tokens[i] == "*") {
                int ans = 0;
                int x = st.top();
                st.pop();
                int y = st.top();
                st.pop();
                ans = x * y;
                st.push(ans);
            } else if (tokens[i] == "-") {
                int ans = 0;
                int x = st.top();
                st.pop();
                int y = st.top();
                st.pop();
                ans = y - x;
                st.push(ans);
            } else if (tokens[i] == "/") {
                int ans = 0;
                int x = st.top();
                st.pop();
                int y = st.top();
                st.pop();
                ans = y / x;
                st.push(ans);
            } else
                st.push(stoi(tokens[i]));
        }
        return st.top();
    }
};