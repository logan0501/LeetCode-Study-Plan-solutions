class DSU {
    vector<int> par, rank;
public:
    DSU(int n) : par(n), rank(n) {
        iota(begin(par), end(par), 0);
    }
    int find(int x) {
        if(x == par[x]) return x;                      
        return par[x] = find(par[x]);                  
    }
    bool Union(int x, int y) {
        int xp = find(x), yp = find(y);                 
        if(xp == yp) return false;                      
        if(rank[xp] > rank[yp]) par[yp] = par[xp];      
        else if(rank[yp] > rank[xp]) par[xp] = par[yp];
        else par[xp] = yp, rank[yp]++;                 
        return true;
    }
};
class Solution {
public:
    vector<int> findRedundantConnection(vector<vector<int>>& e) {
        DSU ds(size(e) + 1);
        for(auto& E : e) 
            if(!ds.Union(E[0], E[1])) return E;	
        return { };  
    }
};