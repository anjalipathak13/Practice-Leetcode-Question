class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t res=0;
        for(int i=0;i<32;i++){
            uint32_t mask1=1<<i;
            if((mask1&n)==0){
               continue;
            }else{
                uint32_t mask2=1<<32-i-1;
                res=res|mask2;
            }
        }
        return res;
        
    }
};