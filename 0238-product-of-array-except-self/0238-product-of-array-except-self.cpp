class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> ans;
        long long int pro = 1;
        int zer = 0;
        for(int i = 0; i<nums.size(); i++){
            if(nums[i] == 0){
                zer++;
                if(zer > 1){
                    pro = 0;
                    break;
                }
                continue;
            }
            pro *= nums[i];
        }        
        for(int i = 0; i<nums.size(); i++){
            if(zer){
                if(nums[i] == 0){
                    ans.push_back(pro);
                }
                else{
                    ans.push_back(0);
                }
            }
            else{
                ans.push_back(pro/nums[i]);
            }
        }
        return ans;
    }
};