class Solution {
    public: int totalFruit(vector < int > & fruits) {
        if (fruits.size() == 1) {
            return 1;
        }
        int first = 0;
        int second = 0;
        int current = 0;
        int ans = 0;
        int secondCount = 0;
        for(int i = 0; i<fruits.size(); i++){
            if(fruits[i] == first || fruits[i] == second){
                current++;
            }
            else{
                current = secondCount+1;
            }
            if(fruits[i] == second){
                secondCount++;
            }
            else{
                secondCount = 1;
            }
            if(fruits[i] != second){
                first = second;
                second = fruits[i];
            }
            ans = max(ans, current);
        }
        return ans;
    }
};