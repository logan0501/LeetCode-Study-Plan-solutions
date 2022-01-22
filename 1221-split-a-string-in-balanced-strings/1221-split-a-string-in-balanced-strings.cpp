class Solution {
public:
    int balancedStringSplit(string s) {
    int res=0,count=0;
        for(char c:s){
            if(c=='L'){
                count++;
            }else{
                count--;
            }
            if(count==0){
                res++;
            }
        }
    return res;
    }
};