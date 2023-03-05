class Solution {
public:
    int passThePillow(int n, int time) {
        int a = 1;
        int c = 0;
        bool posorn = 1;
        while(c != time){
            if(posorn){
                a++;
            }
            else{
                a--;
            }
            if(a == n){
                posorn = !posorn;
            }
            if(a == 1){
                posorn = !posorn;
            }
            c++;
        }
        return a;
    }
};