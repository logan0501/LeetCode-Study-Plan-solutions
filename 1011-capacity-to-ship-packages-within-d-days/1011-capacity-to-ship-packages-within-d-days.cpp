class Solution {
public:
    bool feasible(int cap,vector<int> &weights,int d){
        int days=1;
        int total=0;
        for(auto a:weights){
            total+=a;
            if(total>cap){
                total=a;
                days++;
                if(days>d)return false;
            }
        }
        return true;
        
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int l=0,h=0;
        for(auto a:weights){
            l=max(l,a);
            h+=a;
        }
        while(l<=h){
            int mid= l+(h-l)/2;
            if(feasible(mid,weights,days))h=mid-1;
            else l=mid+1;
        }
        return l;
    }
};