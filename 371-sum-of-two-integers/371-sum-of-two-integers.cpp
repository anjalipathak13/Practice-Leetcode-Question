class Solution {
public:
    int getSum(int a, int b) {
        int carry;
     while(b!=0)
     {
          carry=a&b;
         a=a^b;
         b=(unsigned int)carry<<1;
     }
        return a;
    }
};
  