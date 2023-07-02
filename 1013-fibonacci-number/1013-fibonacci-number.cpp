class Solution {
public:
    vector<int> dp;
    int fib(int n) {
        vector<int> pp(n+1, 0);
        if(n == 1){
            return 1;
        }
        if(n == 0) return 0;
        dp = pp;
        dp[1] = 1;
        fib(2, n);
        return dp[n];
    }
    void fib(int i, int n){
        dp[i] = dp[i-1]+dp[i-2];
        if(i == n){
            return;
        }
        fib(i+1, n);
    }
    
};