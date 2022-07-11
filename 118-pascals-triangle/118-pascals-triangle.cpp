class Solution {
public:
    vector<vector<int>> generate(int n) {
    vector<vector<int>> res(n,vector<int>());
    res[0].push_back({1});
    for(int i=1;i<n;i++){
        for(int j=0;j<=i;j++){
            if(j>0 && j!=i)res[i].push_back(res[i-1][j]+res[i-1][j-1]);
            else res[i].push_back(1);
        }
    }
    return res;
    }
    
};