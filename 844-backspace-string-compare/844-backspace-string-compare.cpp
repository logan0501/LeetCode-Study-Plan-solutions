class Solution {
public:
    bool backspaceCompare(string s, string t) {
               int si=s.size()-1,ti=t.size()-1;
        int sb=0,tb=0;
        while(si>=0 || ti>=0){
            if(si>=0 && s[si]=='#')si--,sb++;
            else if(sb)si--,sb--;
            else if(ti>=0 && t[ti]=='#')ti--,tb++;
            else if(tb)ti--,tb--;
            else if(si<0 || ti<0 || s[si]!=t[ti])return false;
            else si--,ti--;
        }
        return true; 
    }
};