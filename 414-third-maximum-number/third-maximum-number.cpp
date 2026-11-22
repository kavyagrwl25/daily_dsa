class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int bigE = nums[0];
        long long SecE = LLONG_MIN, ThiE = LLONG_MIN;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == bigE || nums[i] == SecE || nums[i] == ThiE)
                continue;
            if (nums[i] > bigE) {
                ThiE = SecE;
                SecE = bigE;
                bigE = nums[i];
            } else if (nums[i] > SecE) {
                ThiE = SecE;
                SecE = nums[i];
            } else if (nums[i] > ThiE) {
                ThiE = nums[i];
            }
        }
        return ThiE == LLONG_MIN ? bigE : ThiE;
    }
};