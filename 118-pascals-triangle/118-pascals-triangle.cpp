class Solution {
public:
    vector<vector<int>> res;
    vector<int> helper(int n){
        if(n==1){res.push_back({1});return {1};}
        vector<int> prev = helper(n-1);
        vector<int> temp;
        temp.push_back(prev[0]);
        for(int i=1;i<prev.size();i++){
            temp.push_back(prev[i]+prev[i-1]);
        }
        temp.push_back(prev[prev.size()-1]);
        res.push_back(temp);
        return temp;
    }
    vector<vector<int>> generate(int n) {
        helper(n);
        return res;
    }
    
};