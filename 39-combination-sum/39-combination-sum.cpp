class Solution {
public:
vector<vector<int>> res;
void f(int i,int sum,vector<int> temp,vector<int> &arr){
    if(i==arr.size()){
        if(sum==0){
            res.push_back(temp);            
        }
        return;
    }
    if(arr[i]<=sum){
        temp.push_back(arr[i]);
        f(i,sum-arr[i],temp,arr);
        temp.pop_back();
    }
    f(i+1,sum,temp,arr);
}
vector<vector<int>> combinationSum(vector<int>& arr, int target) {
       vector<int> temp;
       f(0,target,temp,arr) ;
       return res;
}
};