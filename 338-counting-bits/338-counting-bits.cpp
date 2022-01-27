class Solution {
public:
    vector<int> ans;
    void helper(int i){
        if(i==0){ans.push_back(0);return;}
        if(i==1){ans.push_back(0);ans.push_back(1);return;}
        helper(i-1);
      
        if((i&1)==0){
           
              ans.push_back(ans[(i>>1)]); 
        }else {
           
            ans.push_back(ans[i>>1]+1);}
        
    }
    vector<int> countBits(int n) {
        helper(n);
        return ans;
    }
};