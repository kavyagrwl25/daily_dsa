class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> u;
        for(int i = 0; i<nums.size(); i++){
            int complement = target - nums[i];
            if(u.find(complement) != u.end()){
                return {u[complement], i};
            }
            u[nums[i]] = i;
        }
        return {};
    }
};



// brute-> use nested loops (O(N2))
// better-> sort and two pointer but looses real indexes
// best-> use unordered_map find complement in hashmap (O(n))


















/* unordered_map<int,int> mp;
        for(int i=0; i<nums.size(); i++){
            int comp = target - nums[i];
            if(mp.find(comp) != mp.end()){
                return {mp[comp], i};
            }
            mp[nums[i]] = i;
        }
        return {};
    } */