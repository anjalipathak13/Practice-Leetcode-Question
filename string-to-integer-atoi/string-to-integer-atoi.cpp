class Solution {
public:
    int myAtoi(string s) {
       long long ans = 0;
        
        int i=0, n = s.length(), pos = 1;
        
        while(i<n and s[i] == ' ')
            i++;
        
        if(s[i] == '-' or s[i] == '+')
        {
            if(s[i] == '-')
                pos = -1;
            i++;
        }

        while(i<n and s[i] >= '0' and s[i] <= '9')
        {
            ans *= 10;
            ans += s[i]-'0';
            i++;

            if(ans*pos > INT_MAX)
                return INT_MAX;
            
            if(ans*pos < INT_MIN)
                return INT_MIN;
        }
            
        return ans*pos;
    }

};