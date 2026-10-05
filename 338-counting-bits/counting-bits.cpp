class Solution {
public:

    long numberOfBits(int n) {
        long count = 0;
        while(n != 0) {
            n = n&(n-1);
            count++;
        }
        return count;
    }

    vector<int> countBits(int n) {
        vector<int> arr;
        int i = 0;
        while(i != n+1) {
            arr.push_back(numberOfBits(i));
            i++;
        }
        return arr;
    }
};