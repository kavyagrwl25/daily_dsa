class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> st;
        for(int i=0; i<operations.size(); i++){
            if(operations[i][0] == 'C'){
                st.pop();
            }
            else if(operations[i][0] == 'D'){
                st.push(st.top()*2);
            }
            else if(operations[i][0] == '+'){
                int first = st.top();
                st.pop();
                int second = st.top();
                st.push(first);
                st.push(first + second);
            }
            else{
                st.push(stoi(operations[i]));
            }
        }
        int sum = 0;
        while(!st.empty()){
            sum = sum + st.top();
            st.pop();
        }
        return sum;
    }
};