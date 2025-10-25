class Solution {
public:
    /* int totalMoney(int n) { */
    /* int count = 0;
    int ans = 0;
    int j=1;
    int k =2;
    for(int i=0; i<n; i++){
        ans += j;
        count++;
        if(count == 7) {
            j=k;
            k++;
            count = 0;
        }else {
        j++;
    }
    }
    return ans; */

    int totalMoney(int n) {
        int ans = 0;
        int weekStart = 1;
        for (int i = 0; i < n; i++) {
            ans += weekStart + (i % 7);
            if (i % 7 == 6)
                weekStart++;
        }
        return ans;
    }
};