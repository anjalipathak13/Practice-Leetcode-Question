class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int m = matrix.size();  //  row  size
        int n = matrix[0].size();   // col size
        
        int l = 0;
        int h = m*n-1;
        
        while( l<=h ){
            int mid = l+(h-l)/2;
            int element = matrix[mid/n][mid%n]; // to fetch that element from the matrix
            
            if(element == target)  return true;
            else if(element > target)   h = mid-1;
            else  l=mid+1;
        }
        
        return false;
    }
};