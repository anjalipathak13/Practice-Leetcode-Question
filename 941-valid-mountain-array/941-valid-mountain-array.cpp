class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
      /* int n=arr.size();
        int k=0;
         if( arr.size() < 3 or arr[0]>=arr[1] or arr[arr.size()-1]>=arr[arr.size()-2])
            return false;
        for(int i=0;i<n-1;i++)
        {
            if(arr[i+1]<arr[i]){
                break;
             k=i;
            }
        }
    for(int j=k+1;j<n-1;j++)
    {
        if(arr[j]<=arr[j+1])
            return false;
    }
    return true;*/
        if(arr.size() < 3) return false;
        int l = 0;
        int r = arr.size() - 1;
        while(l + 1 < arr.size() - 1 && arr[l] < arr[l + 1]) l++;
        while(r - 1 > 0 && arr[r] < arr[r - 1]) r--;
        return l == r;
    }
};