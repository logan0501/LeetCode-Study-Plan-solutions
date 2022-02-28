class Solution {
public:
    double average(vector<int>& salary) {
        double sum=0;
        int ma=INT_MIN,mi=INT_MAX;
        for(auto &a:salary){
            sum+=a;
            ma=max(a,ma);
            mi=min(a,mi);
        }
        return (sum-ma-mi)/(salary.size()-2);
    }
};