class Solution {
public:
    void reverseString(vector<char>& s) {
        int n = s.size();
        char temp;
        for(int i = 0; i<n/2; i++){
            temp = s[i];
            s[i] = s[n-i-1];
            s[n-i-1] = temp;
        }
    }
};