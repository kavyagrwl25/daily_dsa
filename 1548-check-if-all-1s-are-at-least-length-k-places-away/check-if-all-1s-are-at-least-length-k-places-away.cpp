class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        int prev = -1; // store index of previous 1

        for (int i = 0; i < nums.size(); i++) {

            if (nums[i] == 1) {

                if (prev != -1) {
                    // distance between two 1's must be >= k+1
                    if (i - prev - 1 < k) {
                        return false;
                    }
                }

                prev = i; // update last seen 1
            }
        }
        return true;
    }
};