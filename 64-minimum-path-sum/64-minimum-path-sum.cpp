class Solution {
public:

int minPathSum(vector<vector<int>>& grid) {
    int m=grid.size(),n=grid[0].size();
    vector<int> prev(n,0);
    prev[0]=grid[0][0];
    for(int i=0;i<m;i++){
        vector<int> temp(n,0);
        for(int j=0;j<n;j++){
            if(i==0 && j==0){temp[j]=grid[0][0];continue;}
            int up=INT_MAX,left=INT_MAX;
            if(i>0)up=prev[j];
            if(j>0)left=temp[j-1];
            temp[j]=grid[i][j]+min(up,left);
        }
        prev=temp;
    }
    return prev[n-1];
}
};