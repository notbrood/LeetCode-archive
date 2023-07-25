class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int ans = 0;
        int index = 0;
        for(int i = 0; i<arr.size(); i++){
            if(ans > arr[i]){
                continue;
            }
            ans = arr[i];
            index = i;
        }
        return index;
    }
};