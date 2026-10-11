class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        vector<vector<int>> ans;
        priority_queue<pair<int, int>, vector<pair<int, int>>,
                       greater<pair<int, int>>> pq;
        int idx = 0;
        for (auto it : points) {
            pq.push({it[0] * it[0] + it[1] * it[1], idx});
            idx++;
        }
        for (int i = 0; i < k; i++) {
            ans.push_back(points[pq.top().second]);
            pq.pop();
        }
        return ans;
    }
};