class Solution {
public:
    string commonstr(string a, string b){
        string ans = "";
        int n = a.length() < b.length() ? a.length() : b.length();
        for(int i = 0; i<n; i++){
            if(a[i] == b[i]) ans += a[i];
            else break;
        }
        return ans;
    }
    string longestCommonPrefix(vector<string>& strs) {
        string s = strs[0];
        for(int i = 1; i<strs.size(); i++){
            s = commonstr(s, strs[i]);
            if(s == "") break;
        }
        return s;
    }
};