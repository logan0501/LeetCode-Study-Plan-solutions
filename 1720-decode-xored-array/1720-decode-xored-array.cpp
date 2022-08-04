class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        vector<int> res;
        res.push_back(first);
        int temp = first;
        for(int i=0;i<encoded.size();i++){
            int curr = temp^encoded[i];
            res.push_back(curr);
            temp=curr;
        }
        return res;
    }
};