class Solution {
public:
    long long smallestNumber(long long num) {
       /* int si=1;
        if(num<0){
            si=-1;
        num=num*-1;}
     string str=to_string(num);
        sort(str.begin(),str.end());
        cout<<str;
        int i=0;
        if(str[0]=='0' && si==1){
        while(str[i]=='0' && si==1){
          i++;
            }
           }
        
            if(str[0]=='0'&&si==1)
            {
            int temp=str[0];
            str[0]=str[i];
            str[i]=temp;
           // cout<<temp;
            }
       int n=stoll(str);
        cout<<n;
        if(si==-1){
           reverse(str.begin(),str.end());
            n=-1*stoll(str);
            }
        return n;*/
        string s=to_string(abs(num));
        if(num>=0)
            sort(s.begin(),s.end());
        else
            sort(s.begin(),s.end(),greater<char>());
        
        if(num>0){
            int ind=s.find_first_not_of('0');
            swap(s[0],s[ind]);
        }
        long long ans=stoll(s);
        if(num<0)
            ans*=-1;
        return ans;
    }
};