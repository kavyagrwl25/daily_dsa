/**
 * // This is the interface that allows for creating nested lists.
 * // You should not implement it, or speculate about its implementation
 * class NestedInteger {
 *   public:
 *     // Constructor initializes an empty nested list.
 *     NestedInteger();
 *
 *     // Constructor initializes a single integer.
 *     NestedInteger(int value);
 *
 *     // Return true if this NestedInteger holds a single integer, rather than a nested list.
 *     bool isInteger() const;
 *
 *     // Return the single integer that this NestedInteger holds, if it holds a single integer
 *     // The result is undefined if this NestedInteger holds a nested list
 *     int getInteger() const;
 *
 *     // Set this NestedInteger to hold a single integer.
 *     void setInteger(int value);
 *
 *     // Set this NestedInteger to hold a nested list and adds a nested integer to it.
 *     void add(const NestedInteger &ni);
 *
 *     // Return the nested list that this NestedInteger holds, if it holds a nested list
 *     // The result is undefined if this NestedInteger holds a single integer
 *     const vector<NestedInteger> &getList() const;
 * };
 */
class Solution {
public:
    NestedInteger deserialize(string s) {
        if(s[0] != '['){
            return NestedInteger(stoi(s));
        }

        int i = 0;
        stack<NestedInteger> st;
        while(i < s.size()){
            if(s[i] == '['){
                st.push(NestedInteger());
                i++;
            }else if(s[i] == ','){
                i++;
            }else if(s[i] == ']'){
                NestedInteger ni = st.top();
                st.pop();
                if(st.empty()){
                    return ni;
                }
                st.top().add(ni);
                i++;
            }else{
                string num = "";
                while(i < s.size() && s[i] != ',' && s[i] != ']'){
                    num.push_back(s[i]);
                    i++;
                }
                st.top().add(NestedInteger(stoi(num)));
            }
        }

        // code won't reach here if the input is valid.
        return NestedInteger();
    }
};