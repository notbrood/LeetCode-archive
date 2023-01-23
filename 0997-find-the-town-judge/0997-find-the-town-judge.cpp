class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        if(n == 1 && trust.size() == 0) return 1;
        if(trust.size() == 0) return -1;
        if(n == 1){
            return trust[0][0];
        }
        unordered_map<int, int> mpp;
        for(auto v: trust){
            mpp[v[1]] += v[0];
        }
        int ans = -1;
        for(auto i: mpp){
            int key = i.first;
            int val = i.second;
            if(val == (n*(n+1)/2 - key)){
                ans = key;
                break;
            }
        }
        if(ans == -1) return ans;
        for(auto v: trust){
            if(v[0] == ans){
                return -1;
            }
        }
        return ans;
    }
};