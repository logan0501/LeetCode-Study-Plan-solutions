class Solution {
public:

int uniquePathsWithObstacles(vector<vector<int>>& grid) {
    if (grid[0][0] == 1)return 0;
    int m = grid.size(), n = grid[0].size();
    vector<int> prev(n,0);
    prev[0] = 1;
    for (int i = 0; i < m; i++)
    {
        vector<int> temp(n,0);
        for (int j = 0; j < n; j++)
        {
            if(i==0 && j==0){temp[j]=1;continue;}
            if (grid[i][j])continue;
            if (i >0)temp[j] += prev[j];
            if (j > 0)temp[j] += temp[j - 1];
            
        }
       

        prev=temp;
    }
    return prev[n - 1];     
}
};