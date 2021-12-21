class Solution {
public:
    int candy(vector<int>& ratings) {
        
        int n=ratings.size();
        vector<int>v(n,1);
       for(int i=1;i<n;i++)
       { //left neighbour 
         if(ratings[i]>ratings[i-1])
             v[i]=v[i-1]+1;
       }
        for(int i=n-2;i>=0;i--)
        {
            if(ratings[i+1]<ratings[i])
                v[i]=max(v[i],v[i+1]+1);
        }int c=0;
        for(int i=0;i<v.size();i++)
            c+=v[i];
        return c;
    }
};