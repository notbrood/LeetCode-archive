class Solution {
public:
    int climbStairs(int n) {
        long long int a = 1; long long int b = 1;
        while(n--){
            int tem = b;
            b = a+b;
            a = tem;
        }
        return a;
    }
};