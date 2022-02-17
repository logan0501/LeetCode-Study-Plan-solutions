class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        int count=-1;
        sort(intervals.begin(),intervals.end(),[](vector<int> &a,vector<int> &b){return a[1]<b[1];});
        vector<int> val=intervals[0];
        for(int i=0;i<intervals.size();i++){
            if(intervals[i][0]<val[1])count++;
            else val=intervals[i];
        }
        return count;
    }
};