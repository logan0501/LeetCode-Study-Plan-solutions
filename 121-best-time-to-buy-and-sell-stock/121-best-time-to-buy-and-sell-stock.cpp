class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int res=INT_MIN,idx=0;
        for(int i=1;i<prices.size();i++){
            if(prices[i]>prices[idx]){
                res=max(res,prices[i]-prices[idx]);
            }else{
                idx=i;
            }
        }
        return res!=INT_MIN?res:0;
    }
};