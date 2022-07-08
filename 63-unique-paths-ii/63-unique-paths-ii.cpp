class Solution {
public:

int uniquePathsWithObstacles(vector<vector<int>>& grid) {
    int m = grid.size(), n = grid[0].size();
    vector<vector<int>> dp(m, vector<int>(n));
    if (grid[0][0] == 1)
        return 0;
    dp[0][0] = 1;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
           
            if (i == 0 && j == 0)
                continue;
            int up = 0, left = 0;

            dp[i][j] = 0;
            if (grid[i][j] == 1)
                continue;

            if (i >0)
                up = dp[i - 1][j];
            if (j > 0)
                left = dp[i][j - 1];
            dp[i][j] = up + left;
            
        }
    }
    return dp[m - 1][n - 1];     
}
};