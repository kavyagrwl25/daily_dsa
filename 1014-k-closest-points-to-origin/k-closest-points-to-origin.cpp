class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        vector<vector<int>> ans;
        priority_queue<pair<int, int>> pq;

        for (int idx = 0; idx < points.size(); idx++) {
            int dist = points[idx][0] * points[idx][0]
                     + points[idx][1] * points[idx][1];

            pq.push({dist, idx});

            if (pq.size() > k) {
                pq.pop();
            }
        }

        while (!pq.empty()) {
            ans.push_back(points[pq.top().second]);
            pq.pop();
        }

        return ans;
    }
};
