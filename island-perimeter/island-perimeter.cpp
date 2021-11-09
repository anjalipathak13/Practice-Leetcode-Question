class Solution {
    
    void dfs(vector<vector<int>>& grid, int i, int j, int r, int c, int &perimeter)
    {
        // Mark as visited
        grid[i][j] = 2;
        
        // Calculate perimeter in all the 4 directions of the current cell
        if(i == 0 || grid[i-1][j] == 0)
            perimeter++;
        
        if(i == r || grid[i+1][j] == 0)
            perimeter++;
        
        if(j == 0 || grid[i][j-1] == 0)
            perimeter++;
        
        if(j == c || grid[i][j+1] == 0)
            perimeter++;
        
        // Check all the 4 directions
        // If land is found then recursively call dfs function
        if(i > 0 && grid[i-1][j] == 1)
            dfs(grid,i-1,j,r,c,perimeter);
        
        if(i < r && grid[i+1][j] == 1)
            dfs(grid,i+1,j,r,c,perimeter);
        
        if(j > 0 && grid[i][j-1] == 1)
            dfs(grid,i,j-1,r,c,perimeter);
        
        if(j < c && grid[i][j+1] == 1)
            dfs(grid,i,j+1,r,c,perimeter);
    }
    public:
    int islandPerimeter(vector<vector<int>>& grid) 
    {
        // r = total rows
        // c = total columns
        int r = grid.size();
        int c = grid[0].size();
        
        // Create a variable to store perimeter
        int perimeter = 0;
        
        // Traverse the grid
        for(int i = 0; i < r; i++)
        {
            for(int j = 0; j < c; j++)
            {
                // If land is found (i.e. grid[i][j] == 1)
                if(grid[i][j] == 1)
                {
                    dfs(grid,i,j,r-1,c-1,perimeter);
					break;
                }
            }
        }
        
        // Return the result
        return perimeter;
    }
};