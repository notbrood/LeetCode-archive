class Solution {
public:
    vector<vector<int>> ans;
    vector<vector<int>> subsets(vector<int>& nums) {
        if(nums.size() == 0){
            return {{}};
        }
        vector<int> curr;
        help(nums, curr, 0);
        return ans;
    }
    void help(vector<int> &nums, vector<int> &curr, int i){
        ans.push_back(curr);
        for(int j = i; j<nums.size(); j++){
            curr.push_back(nums[j]);
            help(nums, curr, j+1);
            curr.pop_back();
        }
        return ;
    }

};