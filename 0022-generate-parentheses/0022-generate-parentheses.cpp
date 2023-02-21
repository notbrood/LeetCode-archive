class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        string cur;
        gen(ans, 0, 0, n, cur);
        return ans;
    }
    void gen(vector<string> &ans, int l, int r, int n, string cur){
        if(l == n && r == n){
            ans.push_back(cur);
        }
        else{
            if(l < n){
                gen(ans, l+1, r, n, cur+'(');
            }
            if(r < l){
                gen(ans, l, r+1, n, cur+')');
            }
        }
    }
};