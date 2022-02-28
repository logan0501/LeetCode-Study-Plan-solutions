class Solution {
public:
    int helper(int n){
        int sum=0;
        while(n){
            int digit=n%10;
            sum+=digit*digit;
            n/=10;
        }
        return sum;
    }
    bool isHappy(int n) {
        int slow=n,fast=n;
        do{
            slow=helper(slow);
            fast=helper(fast);
            fast=helper(fast);
            if(fast==1)return 1;
        }while(slow!=fast);
        return 0;
    }
};