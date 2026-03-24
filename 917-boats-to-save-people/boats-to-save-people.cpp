class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(), people.end());
        int boats = 0;
        int lighter = 0;
        int heavier = people.size()-1;
        while(lighter <= heavier){
            int sum = people[lighter] + people[heavier];
            if(sum > limit){
                heavier--;
            }
            else{
                heavier--;
                lighter++;
            }
            boats++;
        }
        return boats;
    }
};