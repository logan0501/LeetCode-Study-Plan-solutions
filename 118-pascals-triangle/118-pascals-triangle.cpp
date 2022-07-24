class Solution {
public:

vector<vector<int>> generate(int n) {
     vector<vector<int>> res;
    
     vector<int> prev;
     prev.push_back(1);
     res.push_back(prev);
     for(int i=0;i<n-1;i++){
        vector<int> temp;
        temp.push_back(1);
        for(int j=1;j<prev.size();j++){
            temp.push_back(prev[j]+prev[j-1]);
        }
        temp.push_back(1);
         prev=temp;
        res.push_back(temp);
     }
     return res;    
}
};