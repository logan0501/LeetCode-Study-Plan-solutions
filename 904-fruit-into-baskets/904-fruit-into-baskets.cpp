class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        unordered_map<int,int> hash;
        int l=0,r=0,count=0,mxv=INT_MIN;
        while(r<fruits.size()){
            hash[fruits[r]]++;
           
            while(hash.size()>2){
                hash[fruits[l]]--;
               if(hash[fruits[l]]==0)hash.erase(fruits[l]);
                l++;
            }
             mxv=max(mxv,r-l+1);
            r++;
        }
        return mxv;
    }
};