class Solution {
public:
    bool isSubsequence(string s, string t) {
        int si=0;
        for(int ti=0;ti<t.size();ti++){
            cout<<s[si]<<t[ti]<<endl;
            if(s[si]==t[ti])si++;
        }
        return si==s.size();
    }
};