class Solution {
public:
    int minBitFlips(int start, int goal) {
        int ans = 0;
        while(start || goal){
            if(goal%2 != start %2){
                ans++;
            }
            goal /= 2;
            start /= 2;
        }
        return ans;
    }
};