class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;

        for (string token : tokens) {
            if (token == "+" || token == "-" ||
                token == "*" || token == "/") {

                int x = st.top();
                st.pop();

                int y = st.top();
                st.pop();

                if (token == "+")
                    st.push(y + x);
                else if (token == "-")
                    st.push(y - x);
                else if (token == "*")
                    st.push(y * x);
                else
                    st.push(y / x);
            }
            else {
                st.push(stoi(token));
            }
        }

        return st.top();
    }
};