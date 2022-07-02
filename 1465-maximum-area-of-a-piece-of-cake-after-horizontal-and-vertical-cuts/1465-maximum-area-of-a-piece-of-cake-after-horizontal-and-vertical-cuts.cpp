class Solution {
public:
    int maxArea(int l, int w, vector<int>& h, vector<int>& v) {
        h.push_back(0);
         h.push_back(l);
        v.push_back(0);
            v.push_back(w);
        sort(h.begin(),h.end());
        sort(v.begin(),v.end());
        int maxl=INT_MIN,maxv=INT_MIN;
        for(int i=1;i<h.size();i++){
            maxl=max(maxl,h[i]-h[i-1]);
        }
        for(int i=1;i<v.size();i++){
            maxv=max(maxv,v[i]-v[i-1]);
        }
        int m = 1e9+7;
    
        maxl %= m;
         maxv %=  m;
        long long res = (long long)maxl*maxv;
        return res%m;
    }
};