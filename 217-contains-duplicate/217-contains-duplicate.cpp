class Solution {
public:
    bool containsDuplicate(vector<int>& v) {
        unordered_set<int> uset;
        for(int i=0;i<v.size();i++){
            if(uset.find(v[i])!=uset.end()){
                return true;
            }
            uset.insert(v[i]);
        }
        return false;
    }
};