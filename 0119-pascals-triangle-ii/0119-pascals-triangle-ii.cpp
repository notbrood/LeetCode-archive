class Solution {
public:
    vector<int> getRow(int r) {
        vector<int> ans(r+1);
        int up=r;
        int down=1;
        long temp = 1;
        ans[0] = 1;
        for(int i = 1; i<=r; i++){
            temp = temp*up/down;
            up--;
            down++;
            ans[i] = temp;
        }
        ans[r] = 1;
        return ans;
    }
};