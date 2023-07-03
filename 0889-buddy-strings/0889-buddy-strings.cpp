class Solution {
public:
    bool buddyStrings(string s, string goal) {
        if(s.length() != goal.length()) return false;
        int index = -1;
        bool isFound = false;
        if(s == goal){
            unordered_map<char, int> mpp;
            for(char i: s){
                mpp[i]++;
                if(mpp[i] > 1) return true;
            }
            return false;
        }
        for(int i = 0; i<s.length(); i++){
            if(goal[i] != s[i]){
                if(isFound){
                    char a = s[i];
                    s[i] = s[index];
                    s[index] = a;
                    if(goal == s){
                        return true;
                    }
                    else{
                        return false;
                    }
                }
                index = i;
                isFound = true;
            }
        }
        return false;
    }
};