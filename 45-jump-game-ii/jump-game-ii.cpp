class Solution {
public:
    int jump(vector<int>& nums) {
        
        int maxPoint = 0;
        int currPoint = 0;
        int jumps = 0;
        for(int i=0; i<nums.size()-1; i++) {
            maxPoint = max(maxPoint, i + nums[i]);
            
            if(currPoint == i) {
                jumps++;
                currPoint = maxPoint;
            }
        }
        return jumps;
    }
};