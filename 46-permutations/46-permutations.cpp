class Solution {
public:
vector<vector<int>> permute(vector<int> num){
    vector<vector<int>> res;
    rec(res,0,num);
    return res;
}
void rec(vector<vector<int>> &res,int l,vector<int> num){
    if(l==num.size()-1){
        res.push_back(num);
        return;
    }
    for(int i=l;i<num.size();i++){
        swap(num[l],num[i]);
        rec(res,l+1,num);
        swap(num[l],num[i]);
    }
}
};