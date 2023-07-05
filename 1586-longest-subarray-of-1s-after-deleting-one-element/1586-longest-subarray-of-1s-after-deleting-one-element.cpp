class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int curr = 0;
        int maxi = 0;
        int prev = 0;
        for(int i = nums.size()-1; i>=0; i--){
            if(i != 0){
                if(nums[i] == 1){
                    curr++;
                }
                else{
                    maxi = max(maxi, curr+prev);
                    prev = curr;
                    curr = 0;
                }
            }
            else{
                if(nums[i] == 1){
                    curr++;
                }
                maxi = max(maxi, curr+prev);
                prev = curr;
            }
        }
        if(maxi == nums.size()){
            return maxi-1;
        }
        else{
            return maxi;
        }
    }
};