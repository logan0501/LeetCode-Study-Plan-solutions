class Solution {
public:

    int arraySign(vector<int>& nums) {
        int negs=0;
        for(auto &a:nums){
            if(a==0)return 0;
            if(a<0)negs++;
        }
        return negs%2?-1:1;
    }
};