class Solution {
public:
    void change(vector<vector<int>>&image,int sr,int sc,int newColor,int m,int n,int color)
    {
        if(sr<0 || sr>=m  || sc<0 || sc>=n || image[sr][sc]!=color)
            return;
        image[sr][sc]=newColor;
        change(image,sr+1,sc,newColor,m,n,color);
        change(image,sr-1,sc,newColor,m,n,color);
        change(image,sr,sc+1,newColor,m,n,color);
        change(image,sr,sc-1,newColor,m,n,color);

    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
    int m=image.size();
    int n=image[0].size();
         if(image[sr][sc]==newColor)
            return image;
         change(image,sr,sc,newColor,m,n,image[sr][sc]);
    return image;
    }
};