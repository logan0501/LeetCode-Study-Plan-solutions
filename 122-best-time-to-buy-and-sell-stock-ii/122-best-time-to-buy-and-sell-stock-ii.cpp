class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit=0,j=prices.size()-1;
        for(int i=prices.size()-2;i>=0;i--){
            if(prices[i]<prices[j]){
                profit+=prices[j]-prices[i];
            }
            j=i;
        }
        return profit;
    }
};