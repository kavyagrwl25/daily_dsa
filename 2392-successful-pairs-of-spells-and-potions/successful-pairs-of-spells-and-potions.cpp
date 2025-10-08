class Solution {
public:
    int findFirstSuccessful(vector<int>& potions, long long spell,
                            long long success) {
        int left = 0, right = potions.size() - 1;
        int n = potions.size();
        int idx = n;

        while (left <= right) {
            int mid = left + (right - left) / 2;
            if ((long long)spell * potions[mid] >= success) {
                idx = mid;
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }
        return idx;
    }

    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions,
                                long long success) {
        sort(potions.begin(), potions.end());
        int n = potions.size();
        vector<int> res;

        for (int spell : spells) {
            int idx = findFirstSuccessful(potions, spell, success);
            res.push_back(n - idx);
        }

        return res;
    }
};