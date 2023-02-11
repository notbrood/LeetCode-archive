class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int highest = 0;
        int last = 0;
        for(int i = 0; i<gain.size(); i++){
            last += gain[i];
            highest = max(highest, last);
        }
        return highest;
    }
};