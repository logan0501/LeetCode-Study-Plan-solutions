class Solution {
public:
vector<vector<int>> combine(int n, int k) {
    vector<vector<int>> res;
    vector<int> temp;
    backtrack(1,k,res,temp,n);
    return res;
}
void backtrack(int i,int k,vector<vector<int>> &res,vector<int> temp,int n){
    if(temp.size()==k){
        res.push_back(temp);
        return;
    }
    for(int j=i;j<n+1;j++){
        temp.push_back(j);
        backtrack(j+1,k,res,temp,n);
        temp.pop_back();
    }
}
};