class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, int> mpp;
        for(auto i: nums) mpp[i] = -1;
        for(int i = 0; i<nums.size(); i++){
            if(mpp[nums[i]] == -1){
                mpp[nums[i]] = i;
            }
            else{
                if(i-mpp[nums[i]] <= k){
                    return true;
                }
                else{
                    mpp[nums[i]] = i;
                }
            }
        }
        return false;
    }
};