class Solution {
public:
    vector<vector<int>> ans;
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> curr;
        help(0, target, candidates, curr);
        return ans;
    }
    void help(int ind, int target, vector<int> &nums, vector<int> &curr){
        if(ind == nums.size()){
            if(target == 0){
                ans.push_back(curr);
            }
            return ;
        }
        if(nums[ind] <= target){
            curr.push_back(nums[ind]);
            help(ind, target-nums[ind], nums, curr);
            curr.pop_back();
        }
        help(ind+1, target, nums, curr);
    }
};