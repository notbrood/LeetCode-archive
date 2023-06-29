class Solution {
public:
    double myPow(double x, int n) {
        if(x == 1 || x == -1){
            if(n%2 == 0){
                return 1;
            }
            else{
                if(x == -1){
                    return -1;
                }
                else{
                    return 1;
                }
            }
        }
        if(n < 0) x = 1/x;
        n = abs(n);
        return power(x, n);
    }
    
    double power(double x, int n){
        if(n == 0){
            return 1;
        }
        else{
            return x*pow(x, n-1);
        }
    }
};