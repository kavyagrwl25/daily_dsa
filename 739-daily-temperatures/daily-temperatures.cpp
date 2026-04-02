class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<int> st;
        vector<int> arr(temperatures.size());
        for(int i = temperatures.size() - 1; i>=0; i--){
            while(!st.empty() && temperatures[i] >= temperatures[st.top()]){
                st.pop();
            }
            if(st.empty()){
                arr[i] = 0;
            }
            else{
                arr[i] = (st.top() - i);
            }
            st.push(i);
        }
        return arr;
    }
};