class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxArea = 0;
        int i=0;
        int j = height.size() - 1;
        while(i<j){
            int length = min(height[i], height[j]);
            int width = j-i;
            int area = length * width;
            maxArea = max(area, maxArea);
            if(height[i] < height[j]) i++;
            else j--;
        }
        return maxArea;
    }
};