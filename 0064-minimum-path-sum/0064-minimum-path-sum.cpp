class Solution {
public:
    int ans = INT_MAX;
    int minPathSum(vector<vector<int>>& grid) {
        vector<vector<int>> dp(grid.size(), vector(grid[0].size(), -1));
        return help(grid, grid.size()-1, grid[0].size()-1, dp);
    }
    int help(vector<vector<int>>& grid, int i, int j, vector<vector<int>> &dp){
        if(i == 0 && j == 0){
            return grid[0][0];
        }
        if(i < 0 || j < 0) return INT_MAX;
        if(dp[i][j] != -1){
            return dp[i][j];
        }
        dp[i][j] = grid[i][j] + min(help(grid, i-1, j, dp), help(grid, i, j-1, dp));
        return dp[i][j];
    }
};