class Solution {
public:
    void dfs(vector<vector<int>>& land,int i,int j,int n,int m,int &in,int &ij)
    {
        if(i<0 || j<0 || i>=n || j>=m || land[i][j]==0)
            return;
        if(i>in)
            in=i;
        if(j>ij)
            ij=j;
        land[i][j]=0;
        dfs(land,i+1,j,n,m,in,ij);
        dfs(land,i,j+1,n,m,in,ij);
        dfs(land,i,j-1,n,m,in,ij);
        dfs(land,i-1,j,n,m,in,ij);
    }
    vector<vector<int>> findFarmland(vector<vector<int>>& land) {
        vector<vector<int>>v;
      int n=land.size();
      int m=land[0].size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {  vector<int>mn;
               int in=0;
               int ij=0;
                if(land[i][j]==1)
                {
                    mn.push_back(i);
                    mn.push_back(j);
                    dfs(land,i,j,n,m,in,ij);
                    mn.push_back(in);
                    mn.push_back(ij);
                    
                   v.push_back(mn); 
                }
             
            }
        }
        return v;
    }
};