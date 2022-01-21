class Solution {
public:
    void dfs(int i,int j,vector<vector<int>> &img,int color,int paint){
        if(i<0 || j<0 || i>=img.size() || j>=img[0].size() || img[i][j]!=color) return;
        img[i][j]=paint;
        dfs(i+1,j,img,color,paint);
        dfs(i,j+1,img,color,paint);
        dfs(i-1,j,img,color,paint);
        dfs(i,j-1,img,color,paint);
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        if(image.size() && image[sr][sc]!=newColor)dfs(sr,sc,image,image[sr][sc],newColor);
        return image;
    }
};