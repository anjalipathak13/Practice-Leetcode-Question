class Solution {
public:
    bool squareIsWhite(string coordinates) {
     /* int a=(int)(coordinates[0]-'a'+1);
      int b=(int)(coordinates[1]-'0');
        if(a+b%2==0)
            return false;
        else
            return true;*/
        return (coordinates[0] + coordinates[1]) % 2;
      
    }
};