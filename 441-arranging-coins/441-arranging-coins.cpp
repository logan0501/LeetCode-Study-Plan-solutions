class Solution {
public:
    int arrangeCoins(int n) {
        int sum=1,count=0;
        while(n>=sum){
            n-=sum;
            sum++;
            count++;
        }
        return count;
    }
};