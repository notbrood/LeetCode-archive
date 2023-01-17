class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size() == 1){
            return 0;
        }
        int bp = prices[0];
        int profit = 0;
        for(int i = 1; i<prices.size(); i++){
            if(bp < prices[i]){
                profit = max(profit, prices[i]-bp);
            }
            else if(bp > prices[i]){
                bp = prices[i];
            }
        }
        return profit;
    }
};