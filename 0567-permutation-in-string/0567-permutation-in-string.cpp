class Solution {
public:
    bool checkInclusion(string pattern, string str) {
        unordered_map<char, int> mpp;
        unordered_map<char, int> copy;
        if(pattern.length() > str.length()) return false;
        for(auto c: pattern){
            mpp[c]++;
            copy[c]++;
        }
        for(int i = 0; i<str.length()-pattern.length()+1; i++){
            int cnt = 0;
            for(int j = 0; j<pattern.length(); j++){
                if(mpp[str[i+j]] > 0){
                    mpp[str[i+j]]--;
                    cnt++;
                }
                else{
                    break;
                }
            }
            if(cnt == pattern.length()){
                return true;
            }
            mpp = copy;
        }
        return false;
    }
};