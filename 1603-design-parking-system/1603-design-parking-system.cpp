class ParkingSystem {
public:
    int b=0,m=0,s=0;
    ParkingSystem(int big, int medium, int small) {
       if(big>0)
           b+=big;
        if(medium>0)
           m+=medium;
        if(small>0)
            s+=small;
        //cout<<b<<m<<s;
    }
    
    bool addCar(int carType) {
       if(carType==1)
       {
           if(b>0){
                b--;
               return true;
              
             //  cout<<b;
           }
           else{
               return false;
       }}
        
       // cout<<b<<" ";
        if(carType==2)
       {
           if(m>0){
               m--;
               return true;
               
           }
           else{
               return false;
       }}
        
        
       if(carType==3)
       {
           if(s>0){
               s--;
               return true;
               
           }
           else{
               return false;
       }}
     return false;   
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */