class Solution {
public:
    int hammingDistance(int x, int y) {
        int temp = x^y;
        int count=0;
        while(temp){
            temp = temp&(temp-1);
            count++;
        }
        return count;
    }
};