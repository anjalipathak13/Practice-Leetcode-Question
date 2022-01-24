class Solution {
public:
    bool detectCapitalUse(string word) {
      char first=word[0];
        char sec=word[1];
        int l=word.length();
        if((first>=65 && first<=90) && (sec>=65 && sec<=90))
        {
            for(int i=1;i<=l-1;i++)
            {
                if(!(word[i]>=65 && word[i]<=90))
                    return false;
            }
            
            
        }
        if(first>=97 && first<=122){
            for(int i=1;i<=l-1;i++)
            {
                if(!(word[i]>=97 && word[i]<=122))
                    return false;
            }
        
    }
    if((first>=65 && first<=90) && (sec>=97 && sec<=122))
    {
        for(int i=2;i<=l-1;i++)
        {
            if(!(word[i]>=97 && word[i]<=122))
                    return false;
        }
    }
    return true;
}
};