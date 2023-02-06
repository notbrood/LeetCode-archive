class Solution {
public:
    int findMin(vector<int>& nums) {
        int l = 0;
        int r = nums.size()-1;
        if(r == 0) return nums[0];
        if(nums[r] > nums[l]){
            return nums[l];
        }
        if(nums[1] < nums[0]){
            return nums[1];
        }
        int mid;
        while(l < r){
            mid = (l+r)/2;
            if(nums[mid] > nums[mid+1]){
                return nums[mid+1];
            }
            else if(nums[mid] < nums[mid-1]){
                return nums[mid];
            }
            if(nums[mid] > nums[r]){
                l = mid+1;
            }
            else{
                r = mid-1;
            }
        }
        return nums[mid];
    }
};