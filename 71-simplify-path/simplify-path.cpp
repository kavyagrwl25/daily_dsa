class Solution {
public:
    string simplifyPath(string path) {
        vector<string> st;
        string token;
        stringstream ss(path);

        while(getline(ss, token, '/')) {
            if(token == "" || token == ".") continue;
            else if(token == "..") {
                if(!st.empty()) st.pop_back();
            }
            else {
                st.push_back(token);
            }
        }

        string result = "";
        for(string &dir : st) {
            result += "/" + dir;
        }

        return result.empty() ? "/" : result;
    }
};