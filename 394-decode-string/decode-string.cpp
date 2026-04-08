class Solution {
public:
    string decodeString(string s) {
        string ans = "";
        vector<string> st;
        for (char& c : s) {
            if (c != ']') {
                st.push_back(string(1, c));
            } else {
                string substr = "";
                while (st.back() != "[") {
                    substr = st.back() + substr;
                    st.pop_back();
                }
                st.pop_back();
                string a = "";
                while (!st.empty() && isdigit(st.back()[0])) {
                    a = st.back() + a;
                    st.pop_back();
                }
                int k = stoi(a);
                string repeat = "";
                while (k--){
                    repeat += substr;
                }
                st.push_back(repeat);
            }
        }
        for (string& part : st) {
            ans += part;
        }
        return ans;
    }
};