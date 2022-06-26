class Solution {
public:
    bool checkXMatrix(vector<vector<int>>& grid) {
     /* 00 01 02 03
       10 11 12 13
       20 21 22 23
       30 31 32 33 */
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[i].size();j++)
            {
                if((i==j) || (i+j==grid.size()-1))
                {
                    if(grid[i][j]==0)
                        return false;
                }
                else
                {
                    if(grid[i][j]!=0)
                        return false;
                }
            }
        }
        return true;
    }
};