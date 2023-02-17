class Solution {
public:
    string reorderSpaces(string text) {
        vector<string> vec;
        string pp = "";
        int spaceC = 0;
        for(auto i: text){
            if(i == ' '){
                spaceC++;
                if(pp != ""){
                    vec.push_back(pp);
                    pp = "";
                }
            }
            else{
                pp += i;
            }
        }
        
        if(pp != ""){
            vec.push_back(pp);
            pp = "";
        }
        string extraSpace = "";
        if(vec.size() == 1){
            string ans = vec[0];
            for(int i = 0; i<spaceC; i++){
                ans += ' ';
            }
            return ans;
        }
        for(int i = 0; i<spaceC%(vec.size()-1); i++){
            extraSpace += ' ';
        }
        string spacesInBetween = "";
        for(int i = 0; i<spaceC/(vec.size()-1); i++){
            spacesInBetween += ' ';
        }
        string ans = "";
        for(int i = 0; i<vec.size(); i++){
            ans += vec[i];
            if(i == vec.size()-1){
                ans += extraSpace;
            }
            else{
                ans += spacesInBetween;
            }
        }
        return ans;
    }
};