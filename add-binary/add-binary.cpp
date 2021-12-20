class Solution {
public:
    string addBinary(string a, string b) {
        int i=a.length()-1;
        int j=b.length()-1;
        int c=0;
    string result;
        while(i>=0||j>=0)
        { int sum=c;
            if(i>=0)
                sum+=a[i--]-'0';
         if(j>=0)
                sum+=b[j--]-'0';
            c=sum>1?1:0;
            result +=to_string(sum%2);
            
        }
        if(c!=0)
            result +=to_string(c);
        reverse(result.begin(),result.end());
        return result;
    }
};