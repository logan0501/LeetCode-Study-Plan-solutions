class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> umap; 
        for(string s:strs){
            string ch=s;
            sort(ch.begin(),ch.end());
            umap[ch].push_back(s);
        }
        vector<vector<string>> res;
        for(auto p:umap){
            res.push_back(p.second);
        }
        return res;
    }
};