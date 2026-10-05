class Solution {
public:
    vector<int> decimalToBinary(int num) {
        vector<int> bits;
        for (int i = num; i > 0; i /= 2) {
            bits.push_back(i % 2);
        }
        return bits;
    }

    int hammingWeight(int n) {
        int count = 0;
        vector<int> x = decimalToBinary(n);
        for(int i=0; i<x.size(); i++) {
            if(x[i] == 1) count++;
        }
        return count;
    }
};
