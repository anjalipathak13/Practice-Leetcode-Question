class Solution {
public:
    int longestBeautifulSubstring(string word) {
    /* string s="aeiou";
        int j=0,i=0;
        int k=0;
        int maxi=0;
        if(word.length()<5) //"aeaeiouuauuoaoaii"
            return 0;
     for(int i=0;i<word.length();i++)
     {
         
         if(word[i]==s[k])
         {   
             while(word[i]==word[i+1])
             i++;
             k++;
             if(k==5)
             {
                 maxi=max(maxi,(i-j+1));
                 k=0;
             }
         }
         else if(word[i]=='a')  
         {
              k=0;
              j=i;   
         }
         else
         {
             k=0;
             j=i+1;
         }
         }
        return maxi;*/
            
            
        if(word.length()<5) 
            return 0;
        int c=1,j=1,maxi=0;
        int l=1;
      for(int i=1;i<word.length();i++)
      {
          if(word[i-1]<word[i] && word[i-1]!=word[i])
          { 
              l++;
              c++;
          }else if(word[i-1]==word[i])
              l++;
          else
          {
              c=1;
              l=1;
          }
         if(c==5)
         maxi=max(maxi,l); 
      }
        return maxi;
    }
};