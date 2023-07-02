class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans;
        for(int i = 0; i<=n; i++){
            int a = i;
            int c = 0;
            while(a != 0){
                if(a%2 != 0)c++;
                a /= 2;
            }
            ans.push_back(c);
        }
        return ans;
    }
};