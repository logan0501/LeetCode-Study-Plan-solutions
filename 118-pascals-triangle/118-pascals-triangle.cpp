class Solution {
public:
vector<vector<int>> res;
vector<int> f(int i){
    if(i==1){
        res.push_back({1});
        return {1};
    }
    vector<int> prev=f(i-1);
    vector<int> temp;
   temp.push_back(1);
    for(int i=1;i<prev.size();i++){
        temp.push_back(prev[i]+prev[i-1]);
    }
    temp.push_back(1);
    res.push_back(temp);
    return temp;
}
vector<vector<int>> generate(int numRows) {
     f(numRows);
     return res;   
}
};