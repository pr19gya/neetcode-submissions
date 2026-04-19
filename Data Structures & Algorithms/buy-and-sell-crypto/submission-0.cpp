class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int Profit=0;
        int minPrice=INT_MAX;

        for(int i = 0 ; i < prices.size() ; i++){
            if(minPrice > prices[i]){
                minPrice = prices[i];
            }
            int difference = prices[i] - minPrice;
            Profit = max( Profit, difference);
        }

        return Profit;
    }
};
