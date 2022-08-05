class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int xorval =0;
        for(auto a:nums)xorval^=a;
        int pos=0;
        while((xorval&1)==0){
            pos++;
            xorval>>=1;
        }
        int num1=0,num2=0;
        int mask = 1<<pos;
        for(auto a:nums){
            if((a&mask)>0)num1^=a;
            else num2^=a;
        }
        return {num1,num2};
    }
};