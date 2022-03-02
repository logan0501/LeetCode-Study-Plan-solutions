class Solution {
public:
    string interpret(string s) {
        string res="";
        for(int i=0;i<s.size();i++){
            if(s[i]=='(' && s[i+1]==')')res+='o';
            else if(s[i]=='(' && s[i+1]=='a')res+="al";
            else if(s[i]=='G')res+='G';
            else continue;
        }
        return res;
    }
};