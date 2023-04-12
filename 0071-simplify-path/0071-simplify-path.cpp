class Solution {
public:
    string simplifyPath(string path) {
    int n = path.size();
    if(path.back()!='/') {
        path.push_back('/');
        n++;
    }
    cout << path << " " << n << endl;
    string temp;
    stack<string> st;
    int i=1;
    while(i<n) {
        if(path[i] == '/') {
            if(temp=="" || temp==".") {
                temp = "";
            }
            else if(temp=="..") {
                if(!st.empty())
                    st.pop();
            }
            else 
                st.push(temp);
            temp="";
        }
        else {
            temp.push_back(path[i]);
        }
        i++;
    }
    string res="";
    while(!st.empty()) {
        res = "/"+st.top()+res;
        st.pop();
    }
    if(res.length()==0)
        res.push_back('/');
    return res;
}
};