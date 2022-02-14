class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> res;
        int s_size=s.size();
        int p_size=p.size();
        if(s_size<p_size)return {};
        vector<int> hashp(256,0);
        vector<int> hashs(256,0);
        for(int i=0;i<p_size;i++){
            hashs[s[i]]++;
            hashp[p[i]]++;
        }
        if(hashs==hashp)res.push_back(0);
        int l=0,r=p_size;
        while(r<s_size){
            hashs[s[r++]]++;
            hashs[s[l++]]--;
            if(hashs==hashp)res.push_back(l);
        }
        return res;
    }
};