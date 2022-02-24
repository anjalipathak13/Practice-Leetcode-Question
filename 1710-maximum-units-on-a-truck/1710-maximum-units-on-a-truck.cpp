class Solution {
public:
    static bool cmp(vector<int>&a,vector<int>&b)
    {
        if(a[1]>b[1])
           return true;
           else
           return false;
    }
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        sort(boxTypes.begin(),boxTypes.end(),cmp);
        if(boxTypes[0][0]==truckSize)
            return boxTypes[0][1]*truckSize;
        int c=0;
        for(int i=0;i<boxTypes.size();i++)
        {
            if(boxTypes[i][0]<=truckSize)
            {
                c+= boxTypes[i][0]*boxTypes[i][1];
                truckSize-=boxTypes[i][0];
            }else
            {
               c+=(truckSize*boxTypes[i][1]);
                truckSize-=truckSize;
            }
            if(truckSize==0)
                break;
        }
     return c;
    }
};