class Solution {
public:
    void rotate(vector<int>& v1, int k) {
        k=k%v1.size();
        reverse(v1.begin(),v1.end()-k);
        reverse(v1.end()-k,v1.end());
        reverse(v1.begin(),v1.end());
    }
};