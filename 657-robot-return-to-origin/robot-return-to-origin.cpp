class Solution {
public:
    bool judgeCircle(string moves) {
        int ans = 0;
        for(int i=0; i<moves.size(); i++){
            if(moves[i] == 'U'){
                ans++;
            }
            else if(moves[i] == 'D'){
                ans--;
            }
            else if(moves[i] == 'L'){
                ans += 100;
            }
            else if(moves[i] == 'R'){
                ans -= 100;
            }
        }
        if(ans == 0) return true;
        return false;
    }
};