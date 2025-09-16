class Solution {
public:
    int gcd(int a, int b) { return b == 0 ? a : gcd(b, a % b); }

    int lcm(int a, int b) { return a / gcd(a, b) * b; }
    vector<int> replaceNonCoprimes(vector<int>& nums) {
        vector<int> st; 
        for (int x : nums) {
            st.push_back(x);
            
            while (st.size() >= 2) {
                int n = st.size();
                int g = gcd(st[n - 1], st[n - 2]);
                if (g > 1) {
                    int l = lcm(st[n - 1], st[n - 2]);
                    st.pop_back();
                    st.pop_back();
                    st.push_back(l);
                } else {
                    break;
                }
            }
        }
        return st;
    }
};