class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
    long long result = 0;
    int prev = 0; 

    for (const string &row : bank) {
        int cnt = 0;
        for (char c : row) if (c == '1') ++cnt;
        if (cnt > 0) {
            result += 1LL * prev * cnt;
            prev = cnt;
        }
    }

    return (int)result;
}

};