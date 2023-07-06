class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int ans = INT_MAX;
        int i = 0; int j = 0;
        int n = nums.size();
        int summ = 0;
        while(i < n){
            if(nums[i] == target) return 1;
            summ += nums[i];
            while(summ >= target && j <= i){
                ans = min(ans, i-j);
                summ -= nums[j];
                j++;
            }
            i++;
        }
        ans = ans == INT_MAX ? 0 : ans+1;
        return ans;
    }
};