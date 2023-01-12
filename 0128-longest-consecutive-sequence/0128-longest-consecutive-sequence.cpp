class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        long long int ans = 1;
        long long int tem = 1;
        if(nums.size() == 0) return 0;
        if(nums.size() == 1) return 1;
        sort(nums.begin(), nums.end());
        for(long long int i = 0; i<nums.size()-1; i++){
            long long int num = nums[i];
            if(nums[i+1]-nums[i] == 0){
                continue;
            }
            if(nums[i+1] - nums[i] == 1){
                tem++;
            }
            else{
                ans = ans > tem ? ans : tem;
                tem = 1;
            }
        }
        ans = ans > tem ? ans : tem;
        return ans;
    }
};