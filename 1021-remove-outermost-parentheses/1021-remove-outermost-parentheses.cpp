class Solution {
public:
    string removeOuterParentheses(string s) {
        stack<char> st;
        string ans = "";
        for(int i = 0; i<s.length(); i++){
            if(st.empty()){
                st.push('(');
            }
            else{
                if(s[i] == ')'){
                    st.pop();
                }
                else{
                    st.push('(');
                }
                if(!st.empty()){
                    ans += s[i];
                }
            }
        }
        return ans;
    }
};