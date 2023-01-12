long long int max(long long int a, long long int b){
    if(a>b) return a;
    return b;
}

class Solution {
public:
    int maxArea(vector<int>& height) {
        long long int area = INT_MIN;
        long long int j = height.size()-1;
        long long int i = 0;
        while(i != j){
            area = max(area, (j-i)*min(height[i], height[j]));
            if(height[i] <= height[j]){
                i++;
            }
            else{
                j--;
            }
        }
        return area;
    }
};