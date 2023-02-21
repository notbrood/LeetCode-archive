class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        vector<int> dp(cost.size()+1, 0);
        return min(help(cost, dp, 0), help(cost, dp, 1));
    }
    int help(vector<int>& cost, vector<int> &dp, int i){
        if(i >= cost.size()){
            return dp[dp.size()-1];
        }
        if(dp[i] != 0){
            return dp[i];
        }
        dp[i] = cost[i] + min(help(cost, dp, i+1), help(cost, dp, i+2));
        return dp[i];
    }
};