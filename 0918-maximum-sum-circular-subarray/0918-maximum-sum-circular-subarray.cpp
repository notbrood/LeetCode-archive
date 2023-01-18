class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int nonCsum = greedy(nums);
        int totSum = 0;
        for(int i = 0; i<nums.size(); i++){
            totSum += nums[i];
            nums[i] = -nums[i];
        }
        int cirSum = totSum + greedy(nums);
        if(cirSum == 0) return nonCsum;
        return max(cirSum, nonCsum);
    }
    int greedy(vector<int> nums){
        int n = nums.size();
        int sum = nums[0];
        int maxSum = nums[0];
        for(int i = 1; i<n; i++){
            if(sum < 0) sum = 0;
            sum = nums[i] + sum;
            maxSum = max(maxSum, sum);
        }
        return maxSum;
    }
};