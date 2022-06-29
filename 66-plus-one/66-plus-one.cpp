class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int carry=1;
        for(int i=digits.size()-1;i>=0;i--){
            int sum = carry+digits[i];
            if(sum>9){
                digits[i]=sum%10;
                carry=1;
                continue;
            }else{
                digits[i]=sum;
                return digits;
            }
        }
       vector<int> res;
        res.push_back(1);
        for(auto a:digits)res.push_back(a);
        return res;
    }
};