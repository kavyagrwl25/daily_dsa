class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int j=numbers.size()-1;
        for(int i=0; i<numbers.size(); i++){
            int ans = numbers[i] + numbers[j];
            if(ans == target){
                return {i+1, j+1};
            }
            else if(ans > target) {j--;
            i--;
            }
            else{
                continue;
            }
        }
        return {};
    }
};