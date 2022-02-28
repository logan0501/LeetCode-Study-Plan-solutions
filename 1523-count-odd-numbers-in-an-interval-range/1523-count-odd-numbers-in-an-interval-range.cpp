class Solution {
public:
    int countOdds(int low, int high) {
        int odds = (high-low)/2;
        if(low%2 || high%2)odds++;
       
        return odds;
    }
};