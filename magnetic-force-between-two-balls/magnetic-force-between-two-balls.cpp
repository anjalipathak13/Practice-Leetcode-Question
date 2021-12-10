class Solution {
public:
    bool place(int max,vector<int>& p,int m)
    {
        int a=p[0];
        int c=1;
        for(int i=1;i<p.size();i++)
        {
            if(p[i]-a>=max)
            { 
                c++;
                a=p[i];
                
            }
            if(c==m)
                return true;
        }
        return false;
    }
    int maxDistance(vector<int>& position, int m) {
        sort(position.begin(),position.end());
        int l=1;
        int n=position.size();
        int h=position[n-1]-position[0];
        int res=-1;
        while(l<=h)
        {
            int mid=l+(h-l)/2;
            if(place(mid,position,m)==true)
            {
               res=mid;
                l=mid+1;
            }else{
                h=mid-1;
            }
        }
        return res;
    }
};