class Solution {
public:
    
    int minPathSum(vector<vector<int>>& grid) {
    int r = grid.size(), c = grid[0].size();
    int sum = 0;
    for (int i = 0; i < r; i++)
    {
        sum += grid[i][0];
        grid[i][0] = sum;
    }
    sum = 0;
    for (int i = 0; i < c; i++)
    {
        sum += grid[0][i];
        grid[0][i] = sum;
    }
    for (int i = 1; i < r; i++)
    {
        for (int j = 1; j < c; j++)
        {
            grid[i][j] += min(grid[i - 1][j], grid[i][j - 1]);
        }
    }
    return grid[r - 1][c - 1];
    }
};