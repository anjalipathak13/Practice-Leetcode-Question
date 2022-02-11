class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
       int n=cardPoints.size();
        int total=0,i=0;
       
        for(int i=0;i<n;i++)
            total+=cardPoints[i];
                
       int sum=0;    
       for(int i=0;i<n-k;i++)
       {
        sum+=cardPoints[i];
       }
        int maxi=0;
        maxi=total-sum;
       
        
       while(n-k+i<n)
        {
         sum+=cardPoints[n-k+i];
         sum-=cardPoints[i];
            maxi=max(maxi,total-sum);
            i++;
            
        }
        return maxi;
    }
};