class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int, int> mpp;
        for(int i = 0; i<nums.size(); i++){
            mpp[nums[i]]++;
        }
        for(auto i: mpp){
            if(i.second == 1) return i.first;
        }
        return 0;
    }
};