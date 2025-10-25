class Solution {
public:
    int totalMoney(int n) {
        int count = 0;
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
        return ans;
    }
};