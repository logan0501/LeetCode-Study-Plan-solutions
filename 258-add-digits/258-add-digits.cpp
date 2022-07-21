class Solution {
public:
    int addDigits(int num) {
        if(num<10)return num;
        int temp = (num%10)+addDigits(num/10);
        while(temp>9)temp=(temp%10)+addDigits(temp/10);
        return temp;
    }
};