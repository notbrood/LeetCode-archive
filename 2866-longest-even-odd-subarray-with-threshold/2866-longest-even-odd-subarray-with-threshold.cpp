class Solution {
public:
    int longestAlternatingSubarray(vector<int>& nums, int threshold) {
        int ans = 0;
        int last = -1;
        for(int i = 0; i<nums.size(); i++){
            if(nums[i] %2 == 0 && nums[i] <= threshold){
                int curr = 1;
                bool isOdd = true;
                for(int j = i+1; j<nums.size(); j++){
                    if(isOdd){
                        if(nums[j] % 2 != 0 && nums[j] <= threshold){
                            curr++;
                            isOdd = false;
                        }
                        else{
                            break;
                        }
                    }
                    else{
                        if(nums[j] % 2 == 0 && nums[j] <= threshold){
                            curr++;
                            isOdd = true;
                        }
                        else{
                            break;
                        }
                    }
                }
                ans = ans > curr ? ans : curr;
            }
        }
        return ans;
    }
};