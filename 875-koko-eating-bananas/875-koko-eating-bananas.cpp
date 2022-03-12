class Solution {
public:
    
    int minEatingSpeed(vector<int>& piles, int h) {
        int l=1;
        int r=1e9;
        while(l<=r){
            int mid =l+(r-l)/2;
            if(canEat(piles,mid,h))r=mid-1;
            else l=mid+1;
        }
        return l;
        
    }
    bool canEat(vector<int> &piles,int n,int h){
        cout<<n<<endl;
        int hrs=0;
        for(auto p:piles){
            int div = ceil(double(p)/n);
            hrs+=div;
            
        }
        cout<<hrs;
        return hrs<=h;
    }
};