class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        int n = hand.size();

        if (n % groupSize != 0)
            return false;

        map<int, int> freq;

        for (int card : hand)
            freq[card]++;

        for (auto& [card, count] : freq) {
            if (count == 0)
                continue;

            int groups = count;

            for (int i = 0; i < groupSize; i++) {
                if (freq[card + i] < groups)
                    return false;

                freq[card + i] -= groups;
            }
        }

        return true;
    }
};