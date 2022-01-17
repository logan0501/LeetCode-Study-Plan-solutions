class Solution {
public:
    int maxProfit(vector<int>& arr) {
      int profit=0,idx=0;
        for(int i=1;i<arr.size();i++){
            if(arr[i]>arr[idx]){
                profit=max(profit,arr[i]-arr[idx]);
                
            }else{
                idx=i;
            }
        }
        return profit;
    }
};