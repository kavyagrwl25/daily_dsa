class MinStack {
public:
    stack<pair<int, int>> st;
    int mini = INT_MAX;
    MinStack() {}

    void push(int value) {
        if (st.empty()) {
            st.push({value, value});
        } else {
            
            if (st.top().second > value) {
                mini = value;
                st.push({value, mini});
                
            } else {
                st.push({value, st.top().second});
            }
        }
    }

    void pop() { st.pop(); }

    int top() { return st.top().first; }

    int getMin() { return st.top().second; }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */