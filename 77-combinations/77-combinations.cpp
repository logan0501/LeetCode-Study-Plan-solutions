class Solution {
public:
    vector<vector<int>> res;
    void helper(int i,int k,vector<int> &temp,int n){
        
        if(temp.size()==k){
            res.push_back(temp);
            return;
        }
        for(int j=i;j<=n;j++){
            temp.push_back(j);
            helper(j+1,k,temp,n);
            temp.pop_back();
        }
    }
    vector<vector<int>> combine(int n, int k) {
        vector<int> tmep;
        helper(1,k,tmep,n);
        return res;
    }
};