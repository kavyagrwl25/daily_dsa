class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> st;
        int sum = 0;
        int k = operations.size();
        for(int i=0; i<k; i++){
            if(operations[i] == "C"){
                st.pop();
            }
            else if(operations[i] == "D"){
                st.push(st.top()*2);
            }
            else if(operations[i] == "+"){
                int x = st.top();
                st.pop();
                int y = st.top();
                int z = x + st.top();
                st.push(x);
                st.push(z);
            }
            else{
                st.push(stoi(operations[i]));
            }
        }
        while(!st.empty()){
            sum = sum + st.top();
            st.pop();
        }
        return sum;
    }
};