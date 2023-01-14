class Solution {
public:
    string smallestEquivalentString(string s1, string s2, string baseStr) {
        char ch[26];
        for(int i = 0; i<26; i++){
            ch[i] = 'a'+i;
        }
        for(int i = 0; i<s1.length(); i++){
            char toReplace = ch[s1[i]-'a'] > ch[s2[i]-'a'] ? ch[s1[i]-'a'] : ch[s2[i]-'a'];
            char replaceWith = ch[s1[i]-'a'] < ch[s2[i]-'a'] ? ch[s1[i]-'a'] : ch[s2[i]-'a'];
            for(int i = 0; i<26; i++){
                if(ch[i] == toReplace){
                    ch[i] = replaceWith;
                }
            }
        }
        string ans = "";
        for(int i = 0; i<baseStr.length(); i++){
            ans += ch[baseStr[i]-'a'];
        }
        return ans;
    }
};