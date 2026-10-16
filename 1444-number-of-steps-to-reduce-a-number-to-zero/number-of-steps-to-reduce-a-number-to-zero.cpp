class Solution {
public:

    /* int rec(int a) {
        if(a == 0) return 
        if(a == 1)

    } */

    int numberOfSteps(int num) {
        int count = 0;
        while(num != 0) {
            if(num % 2 == 0) num/=2;
            else num--;
            count++;
        }
        return count;
    }
};