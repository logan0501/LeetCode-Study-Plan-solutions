int arr[5] = {0, 1, 0, -1, 0};
class Solution {
    void helper(vector<vector<int>>& grid, int i, int j, vector<pair<int, int>>& v)
    {
        if (i<0 || j<0 || i>=grid.size() || j>=grid.size() || grid[i][j]!=1)
            return ;
        grid[i][j] = 2;
        v.push_back({i, j});
        for (int k=0; k<4; k++)
            helper(grid, i+arr[k], j+arr[k+1], v);
    }
public:
    int shortestBridge(vector<vector<int>>& grid)
    {
        int n = grid.size();
        queue<pair<int, int>> q;
        vector<pair<int, int>> v;
        for (int i=0; i<n; i++)
        {
            bool flag = false;
            for (int j=0; j<n; j++)
            {
                if (grid[i][j] == 1)
                {
                    flag = true;
                    helper(grid, i, j, v);
                    break;
                }
            }
            if (flag)
                break;
        }
        for (auto i: v)
            q.push(i);
        
        int ans = 0;
        while(!q.empty())
        {
            int m = q.size();
            for (int i=0; i<m; i++)
            {
                int x = q.front().first, y = q.front().second;
                q.pop();
                for (int k=0; k<4; k++)
                {
                    int dx = x+arr[k], dy = y+arr[k+1];
                    if (dx<0 || dy<0 || dx>=n || dy>=n)
                        continue;
                    if (grid[dx][dy] == 1)
                        return ans;
                    if (grid[dx][dy] == 0)
                    {
                        q.push({dx, dy});
                        grid[dx][dy] = 2;
                    }
                }
            }
            ans++;
        }
        return ans;
    }
};