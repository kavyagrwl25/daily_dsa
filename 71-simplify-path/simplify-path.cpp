class Solution {
public:
    string simplifyPath(string path) {
        string token = "";
        stack<string> st;
        stringstream ss(path);
        while(getline(ss, token, '/')){
            if(token == ".."){
                if(!st.empty())
                    st.pop();
            }
            else if(token == "." || token == ""){
                continue;
            }else{
                st.push(token);
            }
        }
        string result = "";
        while(!st.empty()){
            result = "/" + st.top()+ result;
            st.pop();
        }
        return result == "" ? "/" : result;
    }
};