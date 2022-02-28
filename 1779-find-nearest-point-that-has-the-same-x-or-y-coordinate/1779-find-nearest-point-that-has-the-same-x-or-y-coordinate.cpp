class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
        int mi=INT_MAX;
        int idx=-1;
        for(int i=0;i<points.size();i++){
            auto v=points[i];
            if(x==v[0] || y==v[1]){
                if(abs(x-v[0])+abs(y-v[1])<mi){idx=i;mi=abs(x-v[0])+abs(y-v[1]);}
            }
        }
        return idx;
    }
};