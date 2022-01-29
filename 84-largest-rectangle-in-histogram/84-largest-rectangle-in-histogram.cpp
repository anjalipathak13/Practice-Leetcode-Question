class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
	int n,j1,j2;
	long long maxi=0;
	n=heights.size();
	int i;
	for(i=0;i<n;i++)
	{
		int c=1;
		j1=i-1;
		j2=i+1;
		while(j1>=0 && heights[j1]>=heights[i])
		{
			c++;
			j1--;
		}
		while(j2<n&&heights[j2]>=heights[i])
		{
			c++;
			j2++;
		}
		long long temp=heights[i]*c;
		maxi=max(maxi,temp);
        int var=heights[i];
        while(i<n&&heights[i]==var)
        {
            i++;
        }
        i--;
	}
    return maxi;
    }
};