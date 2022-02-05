class Solution {
public:
    int addDigits(int num) {
        
     while(!(num>=0 && num<=9))
     {    int u=num;
         int  sum=0;
         while(u)
         {
         int d=u%10;
         sum+=d;
         u=u/10;
      
         }
      num=sum;
      
    }
        return num;
    }
};