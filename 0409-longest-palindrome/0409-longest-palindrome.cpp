class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char, int> mpp;
        for(int i = 0; i<s.length(); i++){
            mpp[s[i]]++;
        }
        bool isEven = false;
        if(s.length() %2 == 0){
            isEven = true;
        }
        int ans = 0;
        bool checkForOne = 0;
        for(auto i: mpp){
            if(i.second %2 != 0){
                ans += i.second-1;
                checkForOne = 1;
            }
            else{
                ans += i.second;
            }
        }
        if(ans % 2 == 0){
            if(checkForOne){
                return ans+1;
            }
            return ans;
        }
        return ans;
    }
};