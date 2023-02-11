class Solution {
public:
    int beautySum(string s) {
        int ans = 0;
        for(int i = 0; i<s.length(); i++){
            unordered_map<char, int> mpp;
            for(int j = i; j<s.length(); j++){
                mpp[s[j]]++;
                int least = INT_MAX;
                int max = INT_MIN;
                for(auto i: mpp){
                    if(i.second > max){
                        max = i.second;
                    }
                    if(i.second < least){
                        least = i.second;
                    }
                }
                ans += max-least;
            }
        }
        return ans;
    }
};