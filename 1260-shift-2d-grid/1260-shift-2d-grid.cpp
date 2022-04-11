class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int m=grid.size(),n=grid[0].size();
       
        for(int l=0;l<k;l++){
        int prev=grid[m-1][n-1];
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                swap(prev,grid[i][j]);
            }
            
        }            
        }

        return grid;
    }
};