class Solution {
public:
    int characterReplacement(string s, int k) {
        if(k >= s.length()) return s.length();
        if(s == "") return 0;
        unordered_map<char, int> mpp;
        int maxi = 0;
        int j = 0;
        int ans = maxi + (k>maxi ? k-maxi : 0);
        for(int i = 0; i<s.length(); i++){
            mpp[s[i]]++;
            if(mpp[s[i]] > maxi) maxi = mpp[s[i]];
            if((i-j+1) - maxi > k){
                mpp[s[j]]--;
                j++;
            }
            ans = max(ans, i-j+1);
        }
        return ans;
    }
};