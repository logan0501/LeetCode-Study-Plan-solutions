class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> hash={
            {'I',1},
            {'V',5},
            {'X',10},
            {'L',50},
            {'C',100},
            {'D',500},
            {'M',1000}
        };
        int sum=hash[s.back()];
        for(int i=s.size()-2;i>=0;i--){
            if(hash[s[i]]<hash[s[i+1]])sum-=hash[s[i]];
            else sum+=hash[s[i]];
        }
        return sum;
    }
};