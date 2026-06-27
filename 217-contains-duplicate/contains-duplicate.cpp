// Shorted Approach
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
       unordered_set<int> set;
       set.reserve(nums.size());
        for(int num : nums){
            if(!set.insert(num).second){
                return true;
            }
        }
    return false;
    }
};


// brute-> use nested loop and check for all elements if similar element present
// better> i can sort the array & check if next element is similar as current one (O(n log n))
// best> use hashmap


















/* 
 sort(nums.begin(),nums.end());
        bool flag = false;
        for(int i =0;i<nums.size()-1;i++){
            if(nums[i] == nums[i+1]) return true;
        }
        return flag; */