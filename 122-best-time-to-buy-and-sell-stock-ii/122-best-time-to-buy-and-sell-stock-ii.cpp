class Solution {
public:
    int maxProfit(vector<int>& prices) {
            int res=0,mini=0;
    for(int i=1;i<prices.size();i++){
        if(prices[mini]<prices[i]){
            res+=prices[i]-prices[mini];
            mini=i;
           
        }else mini=i;
    }
    return res;
    }
};