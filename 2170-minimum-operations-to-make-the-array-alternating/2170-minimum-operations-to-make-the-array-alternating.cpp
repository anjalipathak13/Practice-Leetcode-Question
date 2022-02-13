class Solution {
public:
int minimumOperations(vector<int>& nums) {
       int n=nums.size();
       unordered_map<int,int>even,odd;
      for(int i=0;i<n;i++)
      {
      if(i%2==0)
              even[nums[i]]++;
          else
             odd[nums[i]]++;
     }
     int ecmax=0,evfr=0,esec=0,esecf=0;
     for(auto it:even)
     {
         if(it.second>evfr)
         {
             evfr=it.second;
             ecmax=it.first;
             
         }
     }
     for(auto i:even)
     {
         if(i.second>esecf && ecmax!=i.first)
         {
             esecf=i.second;
             esec=i.first;
         }
     }
    int odf=0,ofm=0,odf2=0,ofm2=0;
    for(auto it:odd)
     {
         if(it.second>odf)
         {
             odf=it.second;
             ofm=it.first;
             
         }
     }
     for(auto i:odd)
     {
         if(i.second>odf2 && ofm!=i.first)
         {
             odf2=i.second;
             ofm2=i.first;
         }
     }
    if(ofm!=ecmax){
        return (n-evfr-odf);
    }
    return min({n-evfr-odf2,n-odf-esecf});
}
};