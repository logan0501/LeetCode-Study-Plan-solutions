class Solution {
public:
    int countConsistentStrings(string s, vector<string>& words) {
        int cnt=0;
        unordered_set<char> uset(s.begin(),s.end());
        for(auto word:words){
            bool found=true;
            for(auto letter:word){
                if(uset.count(letter)==0){
                    found=false;
                    break;
                }
                
            }
            if(found)cnt++;
        }
        return cnt;
    }
};