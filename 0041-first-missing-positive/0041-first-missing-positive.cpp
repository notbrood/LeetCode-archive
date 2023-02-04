class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int a = 1;
        sort(nums.begin(), nums.end());
        for(int i = 0; i<nums.size(); i++){
            if(nums[i] <= 0){
                continue;
            }
            if(nums[i] == a){
                a++;
            }
            if(nums[i] > a){
                break;
            }
        }
        return a;
    }
};