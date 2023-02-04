class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        for(int i = 0; i<n; i++){
            if(nums[i] != 0){
                continue;
            }
            for(int j = i; j<n; j++){
                if(nums[j] != 0){
                    nums[i] = nums[j];
                    nums[j] = 0;
                    i++;
                }
            }
        }
    }
};