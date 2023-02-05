class Solution {
public:
    bool check(vector<int>& nums) {
        int maxEle = 0;
        int count = 0;
        for(int i = 0; i<nums.size()-1; i++){
            if(nums[i] > nums[i+1]){
                count++;
                maxEle = max(maxEle, nums[i]);
            }
            if(nums[i] > maxEle && count > 0){
                return false;
            }
        }
        if(count > 1){
            return false;
        }
        if(nums[nums.size()-1] > maxEle && count > 0){
            return false;
        }
        if(count > 0 && nums[0]<nums[nums.size()-1]){
            return false;
        }
        return true;
    }
};