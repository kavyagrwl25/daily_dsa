class MinStack {
public:
    multiset<int> s;
    stack<int> st;
    int minE = INT_MAX;
    MinStack() {  }

    void push(int val) {
        st.push(val);
        s.insert(val);
    }

    void pop() {
        int poppedElem = st.top();
        st.pop();
        auto it = s.find(poppedElem);
        s.erase(it);
    }

    int top() {
        return st.top();
    }

    int getMin() {
        return *s.begin();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */