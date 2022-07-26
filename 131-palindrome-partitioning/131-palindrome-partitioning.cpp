class Solution {
public:
vector<vector<string>> res;
bool isPalin(string s,int i,int j){
    while(i<=j){
        if(s[i]!=s[j])return false;
        else{
            i++;
            j--;
        }
    }
    return true;
}
void f(int i,vector<string> &temp,string s){
    if(i==s.size()){
        res.push_back(temp);return;
    }
    for(int j=i;j<s.size();j++){
        if(isPalin(s,i,j)){
            temp.push_back(s.substr(i,j-i+1));
            f(j+1,temp,s);
            temp.pop_back();
        }
    }
}

vector<vector<string>> partition(string s) {
    vector<string> temp;
    f(0,temp,s);
    return res;
}
};