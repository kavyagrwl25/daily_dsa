class Solution {
public:
    bool mergeTriplets(vector<vector<int>>& triplets, vector<int>& target) {
        bool first = false; 
        bool second = false; 
        bool third = false; 

        int n = triplets.size(); 

        for (int i = 0; i < n; i++) {
            
            // Can this triplet provide target[0]?
            if (triplets[i][0] == target[0]) {
                if (triplets[i][1] <= target[1] && 
                    triplets[i][2] <= target[2]) {
                    first = true; 
                }
            }

            // Can this triplet provide target[1]?
            if (triplets[i][1] == target[1]) {
                if (triplets[i][0] <= target[0] && 
                    triplets[i][2] <= target[2]) {
                    second = true; 
                }
            }

            // Can this triplet provide target[2]?
            if (triplets[i][2] == target[2]) {
                if (triplets[i][0] <= target[0] && 
                    triplets[i][1] <= target[1]) {
                    third = true;
                }
            }
        }

        return first && second && third; 
    }
};