class Solution {
public:
    int xorOperation(int n, int start) {
      
        int xor1=0;
        for(int i=0;i<n;i++)
        {
            xor1=xor1^start+2*i;;
        }
        return xor1;
    }
};