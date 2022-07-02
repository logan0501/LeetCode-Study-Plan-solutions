class Solution {
public:
    static bool compare(const vector<int> &a,const vector<int> &b){
        return a[1]>b[1];
    }
    int maximumUnits(vector<vector<int>>& boxes, int truckSize) {
        sort(boxes.begin(),boxes.end(),compare);
        int res=0;
        int i=0;
        for(auto box:boxes){    
            int x=min(truckSize,box[0]);
            res+=(x*box[1]);
            truckSize-=x;
            if(!truckSize)break;
        }
         return res;             
    }
};