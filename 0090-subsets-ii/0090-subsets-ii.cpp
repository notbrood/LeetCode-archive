class Solution {
public:
    vector<vector<int>> ans;
    map<vector<int>, bool> mpp;
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<int> curr;
        help(nums, curr, 0);
        return ans;
    }
    void help(vector<int> &nums, vector<int> &curr, int i){
        vector<int> p = curr;
        sort(p.begin(), p.end());
        if(!mpp[p]) {
            ans.push_back(p); 
            mpp[p] = true;
        }
        for(int j = i; j<nums.size(); j++){
            curr.push_back(nums[j]);
            help(nums, curr, j+1);
            curr.pop_back();
        }
        return ;
    }
};