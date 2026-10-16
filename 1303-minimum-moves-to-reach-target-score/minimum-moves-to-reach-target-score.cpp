class Solution {
public:
    int minMoves(int target, int maxDoubles) {
        if(maxDoubles == 0) return target-1;
        int count = 0;
        while(target) {
            if(target%2 == 0 && maxDoubles) {
                target /= 2;
                maxDoubles--;
            }
            else target--;
            count++;
        }
        return count-1;
    }
};