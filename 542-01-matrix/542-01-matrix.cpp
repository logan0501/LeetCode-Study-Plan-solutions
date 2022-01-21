class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
            int m = mat.size(), n = mat[0].size();
    vector<vector<int>> m1(m, vector<int> (n, 10001));
    
    for(int i = 0; i < m; i++)
        for(int j = 0; j < n; j++)
        {
            if(mat[i][j])
            {
                if(i)
                    m1[i][j] = min(m1[i][j], m1[i - 1][j] + 1);
                if(j)
                    m1[i][j] = min(m1[i][j], m1[i][j - 1] + 1);
            }
            else
                m1[i][j] = 0;
        }
    
    for(int i = m - 1; i >= 0; i--)
        for(int j = n - 1; j >= 0; j--)
        {
            if(mat[i][j])
            {
                if(i < m - 1)
                    m1[i][j] = min(m1[i][j], m1[i + 1][j] + 1);
                if(j < n - 1)
                    m1[i][j] = min(m1[i][j], m1[i][j + 1] + 1);
            }
            else
                m1[i][j] = 0;
        }
    
    return m1;
    }
};