class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        vector<int> ct(nums.size(), 0);
        int ans = 1;
        for(int i = 0; i<nums.size(); i++){
            ct[nums[i]]++;
            if(ct[nums[i]] >= 2){
                return nums[i];
            }
        }
        return ans;
    }
};