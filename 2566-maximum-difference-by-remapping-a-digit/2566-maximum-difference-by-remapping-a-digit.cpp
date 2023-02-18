class Solution {
public:
    int minMaxDifference(int num) {
        int mini = INT_MAX;
        int maxi = INT_MIN;
        string s = to_string(num);
        for (int i = 0; i < 10; ++i) {
            for (int j = 0; j < 10; ++j) {
                string b = s;
                for (char& c : b) {
                    if (c == char('0' + i)) {
                        c = char('0' + j);
                    }
                }
                int num1 = stoi(b);
                if (num1 < mini) {
                    mini = num1;
                }
                if (num1 > maxi) {
                    maxi = num1;
                }
            }
        }
        return maxi - mini;
    }
};