class Solution {
public:

    void dfs(vector<vector<char>>& grid, int i, int j) {
        // out of bounds
        if (i < 0 || i >= grid.size() || 
            j < 0 || j >= grid[i].size()) {
                return;
            }
        
        if (grid[i][j] == '0') {
            return;
        }

        // Mark this land cell as visited
        grid[i][j] = '0';

        // explore neighbors
        dfs(grid, i + 1, j);
        dfs(grid, i - 1, j);
        dfs(grid, i, j + 1);
        dfs(grid, i, j - 1);
    }

    int numIslands(vector<vector<char>>& grid) {

        int num_islands = 0;

        // traverse through the grid
        for (int i = 0; i < grid.size(); ++i) {
            for (int j = 0; j < grid[i].size(); ++j) {

                // perform dfs
                if (grid[i][j] == '1') {
                    ++num_islands;
                    dfs(grid, i, j);
                }

            }
        }
        return num_islands;
    }
};
