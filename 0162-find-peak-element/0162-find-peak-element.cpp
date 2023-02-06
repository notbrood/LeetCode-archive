class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        if(nums.size() == 1){
            return 0;
        }
        else if(nums.size() == 2){
            if(nums[0] > nums[1]) return 0;
            return 1;
        }
        int l = 0;
        int r = nums.size()-1;
        int mid;
        while(l < r){
            mid = (l+r)/2;
            if(nums[mid] < nums[mid+1]){
                l = mid+1;
            }
            else{
                r = mid;
            }
        }
        return l;
    }
};