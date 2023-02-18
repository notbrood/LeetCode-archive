class Solution {
public:
    int minImpossibleOR(vector<int>& nums) {
        vector<int> ors;
        unordered_map<int, bool> mpp;
        sort(nums.begin(), nums.end());
        ors.push_back(nums[0]);
        for(int i = 1; i<nums.size(); i++){
            mpp[nums[i]] = true;
            ors.push_back(ors[i-1]|nums[i]);
        }
        int ans = 1;
        for(int i = 0; i<ors.size(); i++){
            if(ors[i] > ans){
                if(mpp[ans]){
                    ans = ors[i]+1;
                    continue;
                }
                else{
                    break;
                }
            }
            else if(ors[i] == ans){
                ans++;
            }
        }
        return ans;
    }
};