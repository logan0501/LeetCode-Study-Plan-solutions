class Solution {
public:
    bool feasible(vector<int> &nums,int m,int t){
        int c=1,sum=0;
        for(auto &a:nums){
            sum+=a;
            if(sum>t){
                sum=a;
                c++;
                if(c>m)return false;
            }
        }
        return true;
    }
    int splitArray(vector<int>& nums, int m) {
        int l=0,r=0;
        for(auto &a:nums){
            l=max(l,a);
            r+=a;
        }
        while(l<=r){
            int mid =l +(r-l)/2;
            if(feasible(nums,m,mid)){r=mid-1;}
            else l=mid+1;
        }
        return l;
    }
};