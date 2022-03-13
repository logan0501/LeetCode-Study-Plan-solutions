class Solution {
public:
    bool feasible(vector<int> days,int m,int k,int t){
        int b=0,c=0;
        for(auto &d:days){
            b=(d<=t)?b+1:0;
            if(b==k)b=0,c++;
            if(c==m)return true;
        }
        return false;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        if(bloomDay.size()<m*k)return -1;
        int l=INT_MAX,h=INT_MIN;
        for(auto &a:bloomDay){
            l=min(l,a);
            h=max(h,a);
        }
        while(l<=h){
            int mid = l+(h-l)/2;
            cout<<mid<<endl;
            if(feasible(bloomDay,m,k,mid))h=mid-1;
            else l=mid+1;
        }
        return l;
        
    }
};