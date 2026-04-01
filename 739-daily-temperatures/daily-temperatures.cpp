class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> arr(temperatures.size());
        stack<int> st;
        for(int i=temperatures.size()-1; i>=0; i--){
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