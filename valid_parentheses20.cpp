class Solution {
public:
    bool isValid(string s) {
        unordered_map<char,char> mp={
            {'}','{'},{')','('},{']','['}
        };
        stack<char> st;
        for(int i=0;i<s.length();i++){
            if(s[i]=='}'||s[i]==')'||s[i]==']'){
                if(st.empty()) return false;
                char c=s[i];
                char a=st.top();
                st.pop();
                if(mp[c]!=a)
                    return false;
            }
            else
                st.push(s[i]);
        }
        if(st.empty())
            return true;
        else
            return false;
    }
};