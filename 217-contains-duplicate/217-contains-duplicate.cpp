class Solution {
public:
    bool containsDuplicate(vector<int>& v) {
        unordered_set<int> uset(v.begin(),v.end());
        return uset.size()!=v.size();
    }
};