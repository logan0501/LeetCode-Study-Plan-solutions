class Solution {
public:
    string helper(string a,string b){
        string res="";
        int i=0,j=0;
        while(i<a.size() && j<b.size()){
            if(a[i]==b[i]){
                res+=a[i];
                i++;
                j++;
             }else{
                break;
            }
        }
        return res;
    }
    string longestCommonPrefix(vector<string>& strs) {
        string ans = strs[0];
        for(int i=1;i<strs.size();i++){
            ans = helper(ans,strs[i]);
        }
        return ans;
    }
};