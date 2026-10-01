class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> right(nums.size(), 1);
        vector<int> left(nums.size(), 1);
        int product = 1;
        for (int i = 0; i < nums.size(); i++) {
            left[i] = product;
            product *= nums[i];
        }
        product = 1;
        for (int i = nums.size() - 1; i >= 0; i--) {
            right[i] = product;
            product *= nums[i];
        }

        vector<int> result(nums.size(), 1);
        for (int i = 0; i < nums.size(); i++) {
            result[i] = left[i] * right[i];
        }
        return result;
    }
};