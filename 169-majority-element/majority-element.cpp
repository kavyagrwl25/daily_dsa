class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int majElem = 0;
        int freq = 0;
        for(int i=0; i<nums.size(); i++){
            if(freq == 0){
                majElem = nums[i];
            }
            if(majElem == nums[i]){
                freq++;
            }
            else{
                freq--;
            }
        }
        return majElem;
    }
};