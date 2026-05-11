class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {

        // Step 1: Find minimum and maximum value in array
        int minValue = INT_MAX;
        int maxValue = INT_MIN;

        for (int num : nums) {
            minValue = min(minValue, num);
            maxValue = max(maxValue, num);
        }

        // Step 2: Create counting array of size (max-min+1)
        // This stores frequency of each number
        vector<int> count(maxValue - minValue + 1, 0);

        // Step 3: Fill frequency array
        for (int num : nums)
            count[num - minValue]++;

        // Step 4: Traverse from largest value to smallest
        // Reduce k by frequency until we reach kth largest
        for (int i = count.size() - 1; i >= 0; i--) {
            k -= count[i];

            // When k becomes <= 0, we found the answer
            if (k <= 0)
                return i + minValue;
        }

        return -1;  // Should never reach here if input is valid
    }
};