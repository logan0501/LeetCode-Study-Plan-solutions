class Solution {
public:
    vector<string> res;
    void f(int i,string s){
        if(i==s.size()){res.push_back(s);return;}
        if(isalpha(s[i])){
            s[i]=tolower(s[i]);           
            f(i+1,s);
            s[i]=toupper(s[i]);            
            f(i+1,s);
        }else{
            f(i+1,s);
        }
    }
    vector<string> letterCasePermutation(string s) {
        f(0,s);
        return res;
    }
};