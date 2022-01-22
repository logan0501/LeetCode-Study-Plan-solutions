class Solution {
public:
    int balancedStringSplit(string s) {
    int count=0,r=0,l=0;
        for(char c:s){
            if(c=='L'){
                l++;
            }else{
                r++;
            }
            if(l==r){
                count++;
                r=l=0;
            }
        }
    return count;
    }
};