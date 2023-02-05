class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> positives;
        vector<int> negatives;
        for(int i = 0; i<nums.size(); i++){
            if(nums[i] > 0) positives.push_back(nums[i]);
            else negatives.push_back(nums[i]);
        }
        int c = 0;
        for(int i = 0; i<nums.size(); i++){
            if(i%2 == 0){
                nums[i] = positives[c];
            }
            else{
                nums[i] = negatives[c];
                c++;
            }
        }
        return nums;
    }
};