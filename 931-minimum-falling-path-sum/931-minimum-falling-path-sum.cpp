class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& mat) {
    int r= mat.size(),c=mat[0].size();
    for(int i=1;i<r;i++){
        for(int j=0;j<c;j++){
            int dx[]={-1,-1,-1};
            int dy[]={0,-1,1};
            int ans = INT_MAX;
            for(int k=0;k<3;k++){
                int xx = i+dx[k];
                int yy = j+dy[k];
                if(xx>=0 && xx<r && yy>=0 && yy<c){
                    ans = min(ans,mat[xx][yy]);
                }
            }
            mat[i][j]+=ans;
        }
    }
    int res=INT_MAX;
    for(int i=0;i<c;i++){
        res=min(res,mat[r-1][i]);
    }
    return res;         
    }
};