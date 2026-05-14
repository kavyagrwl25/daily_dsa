class Solution {
public:
    int trailingZeroes(int n) {
        int ans=abs(n/5)+abs(n/25)+abs(n/125)+abs(n/625)+abs(n/3125);
        return ans;
    }
};