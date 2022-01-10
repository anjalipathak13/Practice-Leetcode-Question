class Solution {
public:
    
    
    
     int isvowel(char c){
        if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c== 'A'|| c == 'E'|| c == 'I'|| c=='O'|| c == 'U')
            return 1;
        return 0;
    }
    string reverseVowels(string s) {
        int n = s.length();
        for(int i=0, j= n-1; i<j;){
            if(isvowel(s[i]) && isvowel(s[j])){
                swap(s[i], s[j]);
                i++;j--;
            }
            if(!isvowel(s[i]))  i++;
            if(!isvowel(s[j]))  j--;
        }
        return s;
    }
};
 /*   string reverseVowels(string s) {
     int i=0;
        int j=s.length()-1;
        while(i<j)
        {
            if((s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u') &&               (s[j]=='a'||s[j]=='e'||s[j]=='i'||s[j]=='o'||s[j]=='u'))
            {
                swap(s[i],s[j]);
                    i++;
                j--;
            } if(!(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'))
                i++;
                if(!(s[j]=='a'||s[j]=='e'||s[j]=='i'||s[j]=='o'||s[j]=='u'))
                    j--;
        }
        return s;
    }
};*/