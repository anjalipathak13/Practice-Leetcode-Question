class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
     int n=arr.size();
        int sum=0;
        int c=0;
        for(int i=0;i<k;i++)
            sum+=arr[i];
        int avg=sum/k;
        if(avg>=threshold)
        c=1;
        for(int i=1;i<=arr.size()-k;i++)
        {
            sum=sum-arr[i-1];
            sum+=arr[i+k-1];
            avg=sum/k;
            if(avg>=threshold){
            c++;
            }
            
        }
        return c;
    }
};