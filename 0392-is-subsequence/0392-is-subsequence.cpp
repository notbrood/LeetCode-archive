class Solution {
public:
    bool isSubsequence(string s, string t) {
        if(t.length() < s.length()){
            return false;
        }
        int a = 0;
        for(int i = 0; i < t.length(); i++){
            if(t[i] == s[a]){
                a++;
            }
        }
        if(a == s.length()){
            return true;
        }
        return false;
    }
};