// Shorted Approach
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {

        unordered_set<int> st;

        for (int num : nums) {

            if (st.find(num) != st.end()) {
                return true;
            }

            st.insert(num);
        }

        return false;
    }
};


// brute-> use nested loop and check for all elements if similar element present
// better> i can sort the array & check if next element is similar as current one (O(n log n))
// best> use hashmap


























/* 

unordered_set<int> set;
       set.reserve(nums.size());
        for(int num : nums){
            if(!set.insert(num).second){
                return true;
            }
        }
    return false; */