class Solution {
public:
    bool isValid(string s) {
        stack<char> stac;
        if(s.length() == 1) return false;
        for(int i = 0; i<s.length(); i++){
            if((s[i] == '}' || s[i] == ']' || s[i] == ')') && stac.empty()) return false;
            if(s[i] == '(' || s[i] == '{' || s[i] == '['){
                stac.push(s[i]);
            }
            else if(s[i] == '}'){
                if(stac.top() == '{'){
                    stac.pop();
                    continue;
                }
                else{
                    return false;
                    break;
                }
            }
            else if(s[i] == ']'){
                if(stac.top() == '['){
                    stac.pop();
                    continue;
                }
                else{
                    return false;
                    break;
                }
            }
            else if(s[i] == ')'){
                if(stac.top() == '('){
                    stac.pop();
                    continue;
                }
                else{
                    return false;
                    break;
                }
            }
        }
        if(stac.empty()){
            return true;
        }
        return false;
    }
};