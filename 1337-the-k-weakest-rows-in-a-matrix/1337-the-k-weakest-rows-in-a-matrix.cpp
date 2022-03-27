class Solution {
public:
    //typedef pair<int, int> pi;
    static bool cmp(pair<int,int>a,pair<int,int>b)
    {
        if(a.first<b.first)
            return true;
        else if(a.first==b.first)
            return a.second<b.second;
        else
        return false;
    }
vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
    //// priority_queue<pi, vector<pi>, greater<pi> > pq;
    vector<pair<int,int>>v;
  int n=mat.size();
    int m=mat[0].size();
    for(int i=0;i<n;i++)
    {  int s=0;
        for(int j=0;j<m;j++)
        {
            if(mat[i][j]==1)
                s++;
        }
     
    
     v.push_back({s,i});
     
    }
    sort(v.begin(),v.end(),cmp);
    vector<int>ans;
    for(int i=0;i<k;i++)
        ans.push_back(v[i].second);
    
    return ans;
    }
};