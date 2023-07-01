class Solution {
public:
    int maxArea(vector<int>& height) {
        int area = 0;
        int i = 0; int j = height.size()-1;
        while(i < j){
            int a = min(height[i], height[j]);
            area = area > (j-i)*a ? area : a*(j-i);
            a == height[i] ? i++ : j--;
        }
        return area;
    }
};