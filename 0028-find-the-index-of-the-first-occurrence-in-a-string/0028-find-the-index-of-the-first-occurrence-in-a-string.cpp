class Solution {
public:
    int strStr(string haystack, string needle) {
        int c = 0;
        bool hogaya = false;
        if(needle.length() > haystack.length()) return -1;
        if(haystack == needle) return 0;
        for(int i = 0; i<haystack.length()-needle.length()+1; i++){
            string matc = haystack.substr(c, needle.length());
            cout << matc << " ";
            if(matc == needle) {
                hogaya = true;
                break;
            }
            c++;
        }
        if(hogaya){
            return c;
        }
        return -1;
    }

};