class Solution {
public:
    string reverseWords(string s) {
        string ans = "";
        string toAdd = "";
        vector<string> words;
        for(int i = s.length()-1; i>=0; i--){
            if(s[i] == ' '){
                if(toAdd == ""){
                    continue;
                }
                reverse(toAdd.begin(), toAdd.end());
                words.push_back(toAdd);
                toAdd = "";
            }
            else{
                toAdd += s[i];
            }
        }
        if(toAdd != ""){
            reverse(toAdd.begin(), toAdd.end());
            words.push_back(toAdd);
            toAdd = "";
        }
        for(int i = 0; i<words.size(); i++){
            ans += words[i];
            if(i == words.size()-1){
                break;
            }
            ans += ' ';
        }
        return ans;
    }
};