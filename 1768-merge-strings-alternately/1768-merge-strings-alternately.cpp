class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string res="";
        int w1i=0,w2i=0;
        
        while(w1i<word1.size() && w2i<word2.size()){
            res+=word1[w1i++];
            res+=word2[w2i++];
        }
        while(w1i<word1.size())res+=word1[w1i++];
         while(w2i<word2.size())res+=word2[w2i++];
        return res;
    }
};