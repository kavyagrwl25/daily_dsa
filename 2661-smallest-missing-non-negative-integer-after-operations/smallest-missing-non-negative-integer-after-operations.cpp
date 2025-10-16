class Solution {
public:
    int findSmallestInteger(vector<int>& nums, int value) {
    if (value <= 0) return 0; // Safety check

    vector<int> count(value, 0);

    // Count remainders
    for (int num : nums) {
        int rem = ((num % value) + value) % value; // Handle negative numbers safely
        count[rem]++;
    }

    int x = 0;
    while (true) {
        if (count[x % value] == 0) {
            return x;
        }
        count[x % value]--;
        x++;
    }
}

};