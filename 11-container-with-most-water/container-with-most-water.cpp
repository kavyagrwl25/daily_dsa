class Solution {
public:
    int maxArea(vector<int>& height) {
        int lp = 0;
        int rp = height.size() - 1;
        int mostWater = 0;
        while(lp < rp){
            int heigh = min(height[lp], height[rp]);
            int width = rp-lp;
            int area = width*heigh;
            mostWater = max(mostWater, area);
            height[lp] < height[rp] ? lp++ : rp--;
        }
        return mostWater;
    }
};