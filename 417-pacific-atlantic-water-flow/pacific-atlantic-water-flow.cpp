class Solution {
public:
    int m, n;
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
        m = heights.size();
        n = heights[0].size();

        vector<vector<int>> pacific(m, vector<int>(n, 0));
        vector<vector<int>> atlantic(m, vector<int>(n, 0));
        vector<vector<int>> result;

        // DFS from all border cells touching Pacific and Atlantic
        for (int i = 0; i < m; i++) {
            dfs(heights, pacific, i, 0, heights[i][0]); // Left border (Pacific)
            dfs(heights, atlantic, i, n - 1,
                heights[i][n - 1]); // Right border (Atlantic)
        }
        for (int j = 0; j < n; j++) {
            dfs(heights, pacific, 0, j, heights[0][j]); // Top border (Pacific)
            dfs(heights, atlantic, m - 1, j,
                heights[m - 1][j]); // Bottom border (Atlantic)
        }

        // Cells reachable by both oceans
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (pacific[i][j] && atlantic[i][j])
                    result.push_back({i, j});
            }
        }

        return result;
    }

private:
    void dfs(vector<vector<int>>& heights, vector<vector<int>>& ocean, int i,
             int j, int prevHeight) {

        if (i < 0 || j < 0 || i >= m || j >= n)
            return;
        if (ocean[i][j] || heights[i][j] < prevHeight)
            return;

        ocean[i][j] = 1;

        dfs(heights, ocean, i + 1, j, heights[i][j]);
        dfs(heights, ocean, i - 1, j, heights[i][j]);
        dfs(heights, ocean, i, j + 1, heights[i][j]);
        dfs(heights, ocean, i, j - 1, heights[i][j]);
    }
};
