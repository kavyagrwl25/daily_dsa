class Solution {
public:
    string getPermutation(int n, int k) {
        int power[10];
        bool visited[10];
        string rs = "";
        memset(visited, 0, sizeof visited);
        power[0] = 1;
        for(int i = 1; i <= 8; i++) power[i] = power[i - 1] * i;
        k--;
        for(int i = n - 1; i >= 0; i--){
            int q = k / power[i], cnt = 0;
            for(int i = 1; i <= n; i++){
                if(!visited[i]){
                    cnt++;
                    if(cnt == q + 1){
                        visited[i] = true;
                        rs.push_back('0' + i);
                        break;
                    }
                }
            }
            k %= power[i];
        }
        return rs;
    }
};