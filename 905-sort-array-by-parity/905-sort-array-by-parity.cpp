class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& a) {
        int i=0;
        int j=a.size()-1;
        while(j>i)
        {
            if(a[i]%2==0)
                i++;
           else if(a[j]%2!=0)
                j--;
            else{
                swap(a[i],a[j]);
                i++;
                j--;
            }
        }
            return a;
        
    }
};