class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() == 0) return 0;
        sort(nums.begin(), nums.end());
        int count = 1;
        int result = 1;
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i - 1] == nums[i])
                continue;
            if (nums[i - 1] + 1 == nums[i]) {

                count++;
                result = max(result, count);
            } else {
                count = 1;
            }
        }
        return result;
    }
};

/*



int n = nums.size();
int count = 1;
int maxCount = 1;
if (n == 0)
    return 0;
sort(nums.begin(), nums.end());
for (int i = 1; i < n; i++) {
    if (nums[i - 1] == nums[i])
        continue;
    if (nums[i - 1] == nums[i] - 1) {
        count++;
        maxCount = max(maxCount, count);
    } else if (nums[i - 1] != nums[i]) {
        count = 1;
    }
}
return maxCount; */