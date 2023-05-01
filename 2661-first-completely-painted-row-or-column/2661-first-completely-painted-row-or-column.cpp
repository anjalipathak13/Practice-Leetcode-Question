class Solution {
public:
    int firstCompleteIndex(vector<int>& arr, vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();
        unordered_map<int,pair<int,int>>mp;
        vector<int>rowcnt(n,0);
        vector<int>colcnt(m,0);
        
        for(int i=0 ; i<n ; i++){
            for(int j=0; j<m ; j++){
                mp[mat[i][j]] = {i,j};   //mapping of the ele with its coordinates
            } 
        }
        
        //traverse the arr
        for(int i=0 ; i<arr.size() ; i++){
            int r = mp[arr[i]].first;      // take row of the ele
            int c = mp[arr[i]].second;     // take col of the ele
            
            rowcnt[r]++;       // inc. the row counter
            colcnt[c]++;       // inc. the col counter
            
            if(rowcnt[r] == m || colcnt[c] == n)  
                return i;
        }
        return -1;
    }
};