class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        int f = 0;
        unordered_map<int, int> mpp;
        for(int i = 0; i<nums.size(); i++){
            mpp[nums[i]] = i;
        }
        for(int i = 0; i<nums.size(); i++){
            int a = nums[i];
            if((mpp[target-a] != 0) && mpp[target-a] != i){
                ans.push_back(i);
                ans.push_back(mpp[target-a]);
                break;
            }
        }
        return ans;
    }
};