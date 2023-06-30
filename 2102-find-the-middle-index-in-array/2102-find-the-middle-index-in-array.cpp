class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int n = nums.size();
        vector<int> fronSum(n, 0);
        for(int i = 1; i<n; i++){
            fronSum[i] = fronSum[i-1]+nums[i-1];
        }
        vector<int> bacSum(n, 0);
        for(int i = n-2; i>=0; i--){
            bacSum[i] = bacSum[i+1]+nums[i+1];
        }
        
        for(int i = 0; i<n; i++){
            if(fronSum[i] == bacSum[i]) return i;
        }
        return -1;
    }
};