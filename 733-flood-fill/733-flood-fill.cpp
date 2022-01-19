class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
              if(image[sr][sc] == newColor)
            return image;
        int k = image[sr][sc];
        image[sr][sc] = newColor;
         if((sr-1) >=0 && image[sr-1][sc] == k)
             image = floodFill(image,sr-1,sc,newColor);
          if((sc-1) >=0 && image[sr][sc-1] == k)
             image = floodFill(image,sr,sc-1,newColor);
         if((sr+1) < image.size() && image[sr+1][sc] == k)
             image = floodFill(image,sr+1,sc,newColor);
          if((sc+1) < image[0].size() && image[sr][sc+1] == k)
             image = floodFill(image,sr,sc+1,newColor);
        
        return image;  
    }
};