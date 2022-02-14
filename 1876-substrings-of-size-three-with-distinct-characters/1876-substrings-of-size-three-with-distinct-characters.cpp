class Solution {
public:
    int countGoodSubstrings(string s) {
        unordered_map<char,int> umap;
        int l=0,r=0,n=s.size();
        int count=0;
        if(n<3)return 0;
    
        for(;r<n;){
            umap[s[r]]++;
            if(r-l<2)r++;
            else{
                if(umap.size()==3)count++;
                umap[s[l]]--;
                if(!umap[s[l]])umap.erase(s[l]);
                r++;
                l++;
            }
        }
    
        return count;
    }
};